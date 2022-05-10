#include <iostream>
#include <fstream>
#include "classes/TokensImmutableGroup.h"
#include "classes/TokensMutableGroup.h"
#include "consts/consts.h"
#include "groups/groups.h"
#include "utils/utils.h"
#include "tests/tests.h"

using namespace std;

// Спарсенные данные из входного файла. Храним глобально, чтобы легко добираться до данных
vector<string> parsedData;

// Закодированные данные
vector<string> codedData;

void parseFile() {
    // Парсинг входного файла
    // Входной файл
    ifstream fileIn("test_example.cpp");
    char ch;
    bool hasUnclosedDoubleQuote = false, hasUnclosedUnaryQuote = false;
    string word;
    while (fileIn.get(ch)) {
        string chStr(1, ch);
        if (isDoubleQuote(chStr) || isUnaryQuote(chStr)) {
            // Сбрасываем слово только если есть незакрытая кавычка
            if (isDoubleQuote(chStr)) {
                if (hasUnclosedDoubleQuote) {
                    parsedData.push_back(word);
                    word = "";
                }
                hasUnclosedDoubleQuote = !hasUnclosedDoubleQuote;
            } else {
                if (hasUnclosedUnaryQuote) {
                    parsedData.push_back(word);
                    word = "";
                }
                hasUnclosedUnaryQuote = !hasUnclosedUnaryQuote;
            }
            parsedData.push_back(chStr);
        } else {
            if (hasUnclosedDoubleQuote || hasUnclosedUnaryQuote) {
                // Если есть незакрытые кавычки, на остальные символы внимания не обращаем
                word += chStr;
            } else {
                if (isSpacer(chStr) || isSign(chStr) || isSpaceSymbol(chStr)) {
                    // Если видим разделитель, то сбрасываем текущее слово в контейнер спарсенных данных
                    if (!word.empty()) {
                        parsedData.push_back(word);
                        word = "";
                    }
                    // Пробелы не рассматриваем
                    if (!isSpaceSymbol(chStr)) {
                        parsedData.push_back(chStr);
                    }
                } else {
                    word.push_back(ch);
                }
            }
        }
    }
    if (!word.empty()) {
        // Закидываем последнее слово
        parsedData.push_back(word);
    }
    for (string word: parsedData) {
        cout << word << endl;
    }
    cout << endl;
}

void codeData() {
    // Кодирование данных
    // Флаги предыдущих символов
    bool isPreviousClass = false;
    // Флаги кавычки
    bool hasUnclosedQuote = false;
    for (string word: parsedData) {
        if (hasUnclosedQuote) {
            if (isQuote(word)) {
                codedData.push_back(spacersGroup.getValueToken(word));
                hasUnclosedQuote = false;
            } else {
                codedData.push_back(stringConstsGroup.getValueToken(word));
            }
        } else {
            if (isKeyWord(word)) {
                // Ключевое слово языка С++
                codedData.push_back(keyWordsGroup.getValueToken(word));
            } else if (isPreviousClass || isUserType(word)) {
                // Пользовательский тип данных
                codedData.push_back(userTypesGroup.getValueToken(word));
            } else if (isSpacer(word)) {
                // Разделитель
                codedData.push_back(spacersGroup.getValueToken(word));
                if (isQuote(word)) {
                    hasUnclosedQuote = true;
                }
            } else if (isSign(word)) {
                // Арифметический знак
                codedData.push_back(arithmeticSignsGroup.getValueToken(word));
            } else {
                try {
                    // Если получится, значит числовая константа. Иначе - переменная
                    stoi(word);
                    codedData.push_back(digitConstsGroup.getValueToken(word));
                } catch (exception) {
                    // Не получилось. Переменная
                    codedData.push_back(variablesGroup.getValueToken(word));
                }
            }
            isPreviousClass = (word == "class");
        }
    }
    for (string word: codedData) {
        cout << word << endl;
    }
}

int main() {
    system("chcp 65001");
    int a;
    prepare();
//    test();
    parseFile();
    codeData();
    cin >> a;
    return 0;
}

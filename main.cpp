#include <iostream>
#include <fstream>
#include "classes/TokensImmutableGroup.h"
#include "classes/TokensMutableGroup.h"
#include "consts/consts.h"
#include "groups/groups.h"
#include "utils/utils.h"
#include "tests/tests.h"

using namespace std;

void parseFile() {
    // Спарсенные данные из входного файла
    vector<string> parsedData;
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
    for (int i = 0; i < parsedData.size(); i++) {
        cout << parsedData[i] << endl;
    }
}

int main() {
    system("chcp 65001");
    prepare();
//    test();
    parseFile();
    return 0;
}

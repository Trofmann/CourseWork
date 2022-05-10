#include "../classes/TokensImmutableGroup.h"
#include "utils.h"
#include "../consts/consts.h"
#include "../groups/groups.h"

// Подготовка к выполнению программы
void prepare() {
    fillDigits();
}

// Заполнение списка знаков, которые могут использоваться в числовых константах
void fillDigits() {
    for (int i = 0; i < 10; i++) {
        digits.push_back(to_string(i));
    }
    digits.push_back(".");
}

// Функции, необходимые при парсинге входного файла
// Базовая функция для проверки вхождения символа в определенную группу
bool baseInGroupChecker(TokensImmutableGroup group, string value) {
    return group.isContains(value);
}

// Является ли символ разделителем
bool isSpacer(string value) {
    return baseInGroupChecker(spacersGroup, value);
}

// Является ли символ арифметическим знаком
bool isSign(string value) {
    return baseInGroupChecker(arithmeticSignsGroup, value);
}

// Является ли слово ключевым словом языка С++
bool isKeyWord(string value) {
    return baseInGroupChecker(keyWordsGroup, value);
}

// Является ли слово пользовательским типом данных
bool isUserType(string value) {
    return baseInGroupChecker(userTypesGroup, value);
}

// Является ли символ знаком, который может использоваться в числовых константах
bool isDigit(string value) {
    return find(digits.begin(), digits.end(), value) != digits.end();
}

// Является ли символ одинарной кавычкой
bool isUnaryQuote(string value) {
    return value == "\'";
}

// Является ли символ двойной кавычкой
bool isDoubleQuote(string value) {
    return value == "\"";
}

// Является ли символ кавычкой
bool isQuote(string value) {
    return isUnaryQuote(value) || isDoubleQuote(value);
}

// Является ли символ пробельным
bool isSpaceSymbol(string value) {
    return (value == " ") || (value == "\n") || (value == "\t");
}

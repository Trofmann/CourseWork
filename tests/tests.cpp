#include "../classes/TokensImmutableGroup.h"
#include "../classes/TokensMutableGroup.h"
#include "../consts/consts.h"
#include "../groups/groups.h"
#include "../utils/utils.h"
#include "tests.h"

void test() {
    // Тестировать лучше всё сразу, чтоб быть уверенным, что ничего не сломалось
    // Группы
    testKeyWordsGroup();
    testSpacersGroup();
    testArithmeticSignsGroup();

    testStringConstsGroup();
    testVariablesGroup();
    testDigitConstsGroup();
    testUserTypesGroup();

    // Прочие утилиты
    testDigitsPreparation();

    // Функции проверки вхождения в группу токенов или логическую группу
    testIsSpacer();
    testIsSign();
    testIsDigit();
    testIsUnaryQuote();
    testIsDoubleQuote();
    testIsKeyWord();
}

void testKeyWordsGroup() {
    // Тестирование неизменяемой группы токенов + тестирование группы токенов ключевых слов
    // Ожидается: kw_0 kw_1
    // Проверено
    cout << keyWordsGroup.getValueToken("alignas") << ' ';
    cout << keyWordsGroup.getValueToken("alignof");
    cout << endl;
}

void testSpacersGroup() {
    // Тестирование группы токенов для разделителей
    // Ожидается: sp_1 sp_7 sp_0
    // Проверено
    cout << spacersGroup.getValueToken(")") << ' ';
    cout << spacersGroup.getValueToken("\"") << ' ';
    cout << spacersGroup.getValueToken("(") << ' ';
    cout << endl;
}

void testArithmeticSignsGroup() {
    // Тестирование группы токенов для арифметических знаков
    // Ожидается: sg_0 sg_7
    // Проверено
    cout << arithmeticSignsGroup.getValueToken("+") << ' ';
    cout << arithmeticSignsGroup.getValueToken("|") << ' ';
    cout << endl;
}

void testStringConstsGroup() {
    // Тестирование изменяемой группы токенов + тестирование группы токенов для строковых констант
    // Ожидается: sc_0 sc_1 sc_1
    // Проверено
    cout << stringConstsGroup.getValueToken("abc") << ' ';
    cout << stringConstsGroup.getValueToken("erf") << ' ';
    cout << stringConstsGroup.getValueToken("erf");
    cout << endl;
}

void testVariablesGroup() {
    // Тестирование группы токенов для переменных
    // Ожидается: vr_0 vr_1 vr_0
    // Проверено
    cout << variablesGroup.getValueToken("ab") << ' ';
    cout << variablesGroup.getValueToken("cd") << ' ';
    cout << variablesGroup.getValueToken("ab") << ' ';
    cout << endl;
}

void testDigitConstsGroup() {
    // Тестирование группы токенов для целочисленных констант
    // Ожидается: dc_0 dc_1 dc_2 dc_1
    // Проверено
    cout << digitConstsGroup.getValueToken(to_string(50)) << ' ';
    cout << digitConstsGroup.getValueToken(to_string(70)) << ' ';
    cout << digitConstsGroup.getValueToken(to_string(80)) << ' ';
    cout << digitConstsGroup.getValueToken(to_string(70)) << ' ';
    cout << endl;
}

void testUserTypesGroup() {
    // Тестирование группы токенов для пользовательских типов данных
    // Ожидается: ut_0 ut_1
    // Проверено
    cout << userTypesGroup.getValueToken("TokensMutableGroup") << ' ';
    cout << userTypesGroup.getValueToken("TokensImmutableGroup") << ' ';
    cout << endl;
}

void testDigitsPreparation() {
    // Тестирование заполнения знаков для числовых констант
    // Ожидается: 0 5 9 .
    // Проверено
    cout << digits[0] << ' ' << digits[5] << ' ' << digits[9] << ' ' << digits[10];
    cout << endl;
}

void testIsSpacer() {
    // Тестирование функции, определяющей, является ли символ разделителем
    // Ожидается: 1 0 0
    // Проверено
    cout << isSpacer("(") << ' ';
    cout << isSpacer("f") << ' ';
    cout << isSpacer(" ") << ' ';
    cout << endl;
}

void testIsSign() {
    // Тестирование функции, определяющей, является ли символ арифметическим знаком
    // Ожидается: 1 0 1
    // Проверено
    cout << isSign("+") << ' ';
    cout << isSign("f") << ' ';
    cout << isSign("-") << ' ';
    cout << endl;
}

void testIsDigit() {
    // Тестирование функции, определяющей, является ли символ знаком, который может использоваться в числовых константах
    // Ожидается: 1 1 0]
    // Проверено
    cout << isDigit("5") << ' ';
    cout << isDigit(".") << ' ';
    cout << isDigit("f") << ' ';
    cout << endl;
}

void testIsUnaryQuote() {
    // Тестирование функции, определяющей, является ли символ одинарной кавычкой
    // Ожидается: 1 0
    // Проверено
    cout << isUnaryQuote("\'") << ' ';
    cout << isUnaryQuote("\"") << ' ';
    cout << endl;
}

void testIsDoubleQuote() {
    // Тестирование функции, определяющей, является ли символ одинарной кавычкой
    // Ожидается: 0 1
    // Проверено
    cout << isDoubleQuote("\'") << ' ';
    cout << isDoubleQuote("\"") << ' ';
    cout << endl;
}

void testIsKeyWord() {
    // Тестирование функции, определяющей, является ли слово ключевым словом языка С++
    // Ожидается: 1 0 1
    cout << isKeyWord("class") << ' ';
    cout << isKeyWord("abc") << ' ';
    cout << isKeyWord("throw") << ' ';
    cout << endl;
}

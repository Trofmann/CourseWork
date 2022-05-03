#include "../classes/TokensImmutableGroup.h"
#include "../classes/TokensMutableGroup.h"
#include "../consts/consts.h"
#include "../groups/groups.h"
#include "tests.h"

void test() {
    testKeyWordsGroup();
    testSpacersGroup();
    testArithmeticSignsGroup();

    testStringConstsGroup();
    testVariablesGroup();
    testDigitConstsGroup();
    testUserTypesGroup();

    testDigitsPreparation();
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
    // Ожидается: sp_0 sp_1 sp_8 sp_2
    // Проверено
    cout << spacersGroup.getValueToken(" ") << ' ';
    cout << spacersGroup.getValueToken("\n") << ' ';
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

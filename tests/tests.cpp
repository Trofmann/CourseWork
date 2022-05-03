#include "../classes/TokensImmutableGroup.h"
#include "../classes/TokensMutableGroup.h"
#include "../consts/consts.h"
#include "tests.h"

void test() {
    testTokensImmutableGroup();
    testTokensMutableGroup();
    testDigitsPreparation();
}

void testTokensImmutableGroup() {
    // Тестирование неизменяемой группы токенов
    // Ожидается: kw_0 kw_1
    // Проверено
    TokensImmutableGroup kws(keyWordsGroupPrefix, keyWords);
    cout << kws.getValueToken("alignas") << ' ';
    cout << kws.getValueToken("alignof");
    cout << endl;
}

void testTokensMutableGroup() {
    // Тестирование изменяемой группы токенов
    // Ожидается: sc_0 sc_1 sc_1
    // Проверено
    vector<string> stringConsts;
    stringConsts.push_back("abc");
    TokensMutableGroup stringConstsGroup(stringConstsGroupPrefix, stringConsts);
    cout << stringConstsGroup.getValueToken("abc") << ' ';
    cout << stringConstsGroup.getValueToken("erf") << ' ';
    cout << stringConstsGroup.getValueToken("erf");
    cout << endl;
}

void testDigitsPreparation() {
    // Тестирование заполнения знаков для числовых констант
    // Ожидается: 0 5 9 .
    // Проверено
    cout << digits[0] << ' ' << digits[5] << ' ' << digits[9] << ' ' << digits[10];
    cout << endl;
}

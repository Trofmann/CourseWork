#include "../classes/TokensImmutableGroup.h"
#include "../classes/TokensMutableGroup.h"
#include "../consts/consts.h"
#include "tests.h"

void testTokensImmutableGroup() {
    // Тестирование неизменяемой группы токенов
    // Ожидается: kw_0 kw_1
    // Проверено
    TokensImmutableGroup kws("kw", keyWords);
    cout << kws.getValueToken("alignas") << ' ';
    cout << kws.getValueToken("alignof");
    cout << endl;
}

void testTokensMutableGroup() {
    // Тестирование изменяемой группы токенов
    // Ожидается: str_c_0 str_c_1 str_c_1
    // Проверено
    vector<string> str;
    str.push_back("abc");
    TokensMutableGroup strgr("str_c", str);
    cout << strgr.getValueToken("abc") << ' ';
    cout << strgr.getValueToken("erf") << ' ';
    cout << strgr.getValueToken("erf");
    cout << endl;
}

void testDigitsPreparation() {
    // Тестирование заполнения знаков для числовых констант
    // Ожидается: 0 5 9 .
    // Проверено
    cout << digits[0] << ' ' << digits[5] << ' ' << digits[9] << ' ' << digits[10];
    cout << endl;
}

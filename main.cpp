#include <iostream>
#include <string>
#include <utility>
#include "TokensImmutableGroup.h"
#include "TokensMutableGroup.h"
#include "consts.h"
#include "utils.h"

using namespace std;

// TODO: Группы токенов объявлять в глобальной области видимости, чтобы можно было получить доступ из функций

void testTokensImmutableGroup() {
    // Тестирование неизменяемой группы токенов
    // Ожидается: kw_0 kw_1
    TokensImmutableGroup kws("kw", keyWords);
    cout << kws.getValueToken("alignas") << ' ';
    cout << kws.getValueToken("alignof");
}

void testTokensMutableGroup() {
    // Тестирование изменяемой группы токенов
    // Ожидается: str_c_0 str_c_1 str_c_1
    vector<string> str;
    str.push_back("abc");
    TokensMutableGroup strgr("str_c", str);
    cout << strgr.getValueToken("abc") << ' ';
    cout << strgr.getValueToken("erf") << ' ';
    cout << strgr.getValueToken("erf");
}

void testDigitsPreparation() {
    // Тестирование заполнения знаков для числовых констант
    // Ожидается: 0 5 9 .
    cout << digits[0] << ' ' << digits[5] << ' ' << digits[9] << ' ' << digits[10];
}

int main() {
    system("chcp 65001");
    prepare();
    testDigitsPreparation();
    return 0;
}

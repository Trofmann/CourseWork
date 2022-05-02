#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>

using namespace std;

#ifndef COURSEWORK_TOKENSIMMUTABLEGROUP_H
#define COURSEWORK_TOKENSIMMUTABLEGROUP_H


class TokensImmutableGroup {
    // Класс для группы токенов, состав которой постоянен

    void fillTokens();

public:
    // Разделитель между префиксом и кодом
    static string prefixDelimiter;
    // Префикс токена
    string prefix;
    // Значения, которые кодируем
    vector<string> values;
    // Коды значений
    vector<string> codes;
    // Словарь токенов
    // token = prefix + prefixDelimiter + Код
    map<string, string> tokens;

    TokensImmutableGroup(string prefix_, vector<string> values_);

    string getValueToken(const string &value);
};


#endif //COURSEWORK_TOKENSIMMUTABLEGROUP_H

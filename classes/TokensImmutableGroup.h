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
protected:
    void fillTokens();

    string getToken(int code);

public:
    // Разделитель между префиксом и кодом
    static string prefixDelimiter;
    // Префикс токена
    string prefix;
    // Значения, которые кодируем
    vector<string> values;
    // Словарь токенов
    // token = prefix + prefixDelimiter + Код
    map<string, string> tokens;

    TokensImmutableGroup(string prefix_, vector<string> values_);

    TokensImmutableGroup(string prefix_);

    string getValueToken(const string &value);
};


#endif //COURSEWORK_TOKENSIMMUTABLEGROUP_H

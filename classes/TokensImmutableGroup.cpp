#include "TokensImmutableGroup.h"

TokensImmutableGroup::TokensImmutableGroup(string prefix_, vector<string> values_) {
    prefix = move(prefix_);
    values = move(values_);
    this->fillTokens();
}

TokensImmutableGroup::TokensImmutableGroup(string prefix_) {
    prefix = move(prefix_);
    this->fillTokens();
}

void TokensImmutableGroup::fillTokens() {
    // Заполнение словаря токенов
    for (int i = 0; i < this->values.size(); i++) {
        this->tokens[values[i]] = this->getToken(i);
    }
}

string TokensImmutableGroup::getToken(int code) {
    // Из значения в токен
    return this->prefix + this->prefixDelimiter + to_string(code);
}

string TokensImmutableGroup::getValueToken(const string &value) {
    // Токен по значению
    return this->tokens[value];
}

bool TokensImmutableGroup::isContains(const string &value) {
    // Проверка вхождения значения в группу
    return find(this->values.begin(), this->values.end(), value) != this->values.end();
}

string TokensImmutableGroup::prefixDelimiter = "_";

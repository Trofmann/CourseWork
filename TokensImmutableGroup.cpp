#include "TokensImmutableGroup.h"

TokensImmutableGroup::TokensImmutableGroup(string prefix_, vector<string> values_) {
    prefix = move(prefix_);
    values = move(values_);
    this->fillTokens();
}

void TokensImmutableGroup::fillTokens() {
    // Заполнение словаря токенов
    for (int i = 0; i < this->values.size(); i++) {
        this->tokens[values[i]] = this->prefix + this->prefixDelimiter + to_string(i);
    }
}

string TokensImmutableGroup::getValueToken(const string &value) {
    // Токен по значению
    return this->tokens[value];
}

string TokensImmutableGroup::prefixDelimiter = "_";

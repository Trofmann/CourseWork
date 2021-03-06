#include "TokensMutableGroup.h"

using namespace std;

TokensMutableGroup::TokensMutableGroup(string prefix_) : TokensImmutableGroup(std::move(prefix_)) {}

TokensMutableGroup::TokensMutableGroup(string prefix_, vector<string> values_) : TokensImmutableGroup(
        std::move(prefix_), std::move(values_)) {}

string TokensMutableGroup::getValueToken(const string &value) {
    // Токен по значению
    if (this->isContains(value)) {
        // Значение уже есть в группе, можем сразу вернуть токен
        return TokensImmutableGroup::getValueToken(value);
    } else {
        // Сначала заносим в словарь токенов, потом возвращаем токен
        this->values.push_back(value);
        this->tokens[value] = getToken(this->values.size() - 1);
        return this->tokens[value];
    }
}
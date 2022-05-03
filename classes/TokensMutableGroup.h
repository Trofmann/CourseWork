#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include "TokensImmutableGroup.h"

#ifndef COURSEWORK_TOKENSMUTABLEGROUP_H
#define COURSEWORK_TOKENSMUTABLEGROUP_H


class TokensMutableGroup : public TokensImmutableGroup {
    // Класс для группы токенов, состав которой непостоянен
private:
    bool isContains(const string& value_);
public:
    TokensMutableGroup(string prefix_);

    TokensMutableGroup(string prefix_, vector<string> values_);

    string getValueToken(const string &value);
};


#endif //COURSEWORK_TOKENSMUTABLEGROUP_H

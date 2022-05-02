#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include "TokensImmutableGroup.h"
#include "consts.h"

using namespace std;

// TODO: Группы токенов объявлять в глобальной области видимости, чтобы можно было получить доступ из функций

int main() {
    system("chcp 65001");
    TokensImmutableGroup kws("kw", keyWords);
    cout << kws.getValueToken("alignas");
    cout << kws.getValueToken("alignof");
    return 0;
}

#include <iostream>
#include "classes/TokensImmutableGroup.h"
#include "classes/TokensMutableGroup.h"
#include "consts/consts.h"
#include "utils/utils.h"
#include "tests/tests.h"

using namespace std;

// TODO: Группы токенов объявлять в глобальной области видимости, чтобы можно было получить доступ из функций


int main() {
    system("chcp 65001");
    prepare();
    test();
    return 0;
}

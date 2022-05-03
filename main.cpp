#include <iostream>
#include <fstream>
#include "classes/TokensImmutableGroup.h"
#include "classes/TokensMutableGroup.h"
#include "consts/consts.h"
#include "utils/utils.h"
#include "groups/groups.h"
#include "tests/tests.h"

using namespace std;

int main() {
    system("chcp 65001");
    prepare();
    // test();
    // Спарсенные данные из входного файла
    vector <string> parsedData;
    // Входной файл
    ifstream fileIn("easy_example.cpp");
    char ch;
    while (fileIn.get(ch)) {
        cout << 1;
    }
    return 0;
}

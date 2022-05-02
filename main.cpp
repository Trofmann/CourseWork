#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include "TokensImmutableGroup.h"

using namespace std;

// Список всех ключевых слов. Объявляем в глобальной области видимости, чтобы можно было получить доступ из функций
//vector<string> keyWords{"123", "abc"};

int main() {
    system("chcp 65001");
    vector<string> keyWords;
    keyWords.push_back("123");
    TokensImmutableGroup kws("kw", keyWords);
    cout << kws.getValueToken("123");
    return 0;
}

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>

using namespace std;

// Список всех ключевых слов. Объявляем в глобальной области видимости, чтобы можно было получить доступ из функций
vector<string> keyWords{};

class TokensImmutableGroup {
    // Класс для группы токенов, состав которой постоянен
    // Заполнение словаря токенов
    void fillTokens() {
        for (int i = 0; i < this->values.size() + 1; i++) {
            tokens[values[i]] = prefix + prefixDelimiter + to_string(i);
        }
    }

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

    TokensImmutableGroup(string prefix_, vector<string> values_) {
        prefix = move(prefix_);
        values = move(values_);
        fillTokens();
    }

    string getValueToken(const string &value) {
        return tokens[value];
    }
};

string TokensImmutableGroup::prefixDelimiter = "_";

int main() {
    return 0;
}

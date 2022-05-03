#include <vector>
#include "consts.h"

using namespace std;

// Списки значений для постоянных групп
// Список всех ключевых слов.
const vector<string> keyWords = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor", "bool", "break", "case", "catch",
        "char", "char8_t", "char16_t", "char32_t", "class", "compl", "concept", "const", "const_cast", "consteval",
        "constexpr", "constinit", "continue", "co_await", "co_return", "co_yield", "decltype", "default", "delete",
        "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float", "for",
        "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq",
        "nullptr", "operator", "or", "or_eq", "private", "protected", "public", "register", "reinterpret_cast",
        "requires", "return", "short", "signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch",
        "template", "this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union",
        "unsigned", "using", "virtual", "void", "volatile", "volatile", "while", "xor", "xor_eq",
};

// Список разделителей
const vector<string> spacers = {
        " ", "\n", "(", ")", "{", "}", "[", "]", "\"", "'", ":", ";", "_", ",", "\t"
};

// Список арифметических знаков
const vector<string> arithmeticSigns = {
        "+", "-", "<", ">", "=", "!", "&", "|"
};

// Список знаков, которые могут использоваться в числовых константах
vector<string> digits;

// Префиксы групп. Правило: длина префикса равна 2

string prefixDelimiter_ = "_";
//Ключевые слова -> key words -> kw
string keyWordsGroupPrefix = "kw";

// Разделители -> spacers -> sp
string spacersGroupPrefix = "sp";

// Арифметические знаки -> arithmetic signs -> sg
string arithmeticSignsGroupPrefix = "sg";

// Переменные -> variables -> vr
string variablesGroupPrefix = "vr";

// Числовые константы -> digit consts -> dc
string digitConstsGroupPrefix = "dc";

// Строковые константы -> string consts -> sc
string stringConstsGroupPrefix = "sc";

// Пользовательские типы данных -> user data types -> ut
string userTypesGroupPrefix = "ut";

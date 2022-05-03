#include <string>
#include <vector>

using namespace std;

#ifndef COURSEWORK_CONSTS_H
#define COURSEWORK_CONSTS_H

// Список всех ключевых слов.
extern const vector<string> keyWords;

// Список всех разделителей
extern const vector<string> spacers;

// Список всех арифметических знаков
extern const vector<string> arithmeticSigns;

// Список знаков, которые могут использоваться в числовых константах
extern vector<string> digits;

// Префиксы групп

extern string prefixDelimiter_;
// Ключевые слова
extern string keyWordsGroupPrefix;

// Разделители
extern string spacersGroupPrefix;

// Арифметические знаки
extern string arithmeticSignsGroupPrefix;

// Переменные
extern string variablesGroupPrefix;

// Числовые константы
extern string digitConstsGroupPrefix;

// Строковые константы
extern string stringConstsGroupPrefix;

// Пользовательские типы данных
extern string userTypesGroupPrefix;

#endif //COURSEWORK_CONSTS_H

#include "groups.h"
#include "../consts/consts.h"

// Неизменяемые группы
// Ключевые слова
TokensImmutableGroup keyWordsGroup(keyWordsGroupPrefix, keyWords);
// Разделители
TokensImmutableGroup spacersGroup(spacersGroupPrefix, spacers);
// Арифметические знаки
TokensImmutableGroup arithmeticSignsGroup(arithmeticSignsGroupPrefix, arithmeticSigns);

// Изменяемые группы
// Переменные
TokensMutableGroup variablesGroup(variablesGroupPrefix);
// Числовые константы
TokensMutableGroup digitConstsGroup(digitConstsGroupPrefix);
// Строковые константы
TokensMutableGroup stringConstsGroup(stringConstsGroupPrefix);
// Пользовательские типы данных
TokensMutableGroup userTypesGroup(userTypesGroupPrefix);

#include "../classes/TokensImmutableGroup.h"
#include "../classes/TokensMutableGroup.h"

#ifndef COURSEWORK_GROUPS_H
#define COURSEWORK_GROUPS_H

// Неизменяемые группы
// Ключевые слова
extern TokensImmutableGroup keyWordsGroup;
// Разделители
extern TokensImmutableGroup spacersGroup;
// Арифметические знаки
extern TokensImmutableGroup arithmeticSignsGroup;

// Изменяемые группы
// Переменные
extern TokensMutableGroup variablesGroup;
// Числовые константы
extern TokensMutableGroup digitConstsGroup;
// Строковые константы
extern TokensMutableGroup stringConstsGroup;
// Пользовательские типы данных
extern TokensMutableGroup userTypesGroup;

#endif //COURSEWORK_GROUPS_H

#include <string>
#include "../classes/TokensImmutableGroup.h"

using namespace std;
#ifndef COURSEWORK_UTILS_H
#define COURSEWORK_UTILS_H

// Подготовка к выполнению программы
extern void prepare();

// Заполнение списка знаков, которые могут использоваться в числовых константах
extern void fillDigits();

// Базовая функция для проверки вхождения символа в определенную группу
extern bool baseInGroupChecker(TokensImmutableGroup, string);

// Является ли символ разделителем
extern bool isSpacer(string);

// Является ли символ арифметическим знаком
extern bool isSign(string);

// Является ли символ знаком, который может использоваться в числовых константах
extern bool isDigit(string);

// Является ли символ одинарной кавычкой
extern bool isUnaryQuote(string);

// Является ли символ двойной кавычкой
extern bool isDoubleQuote(string);

#endif //COURSEWORK_UTILS_H

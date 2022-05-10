#ifndef COURSEWORK_TESTS_H
#define COURSEWORK_TESTS_H

// "Тестирование" кода
extern void test();

// Тестирование неизменяемой группы токенов + тестирование группы токенов ключевых слов
extern void testKeyWordsGroup();

// Разделители
extern void testSpacersGroup();

// Арифметические знаки
extern void testArithmeticSignsGroup();

// Переменные
extern void testVariablesGroup();

// Числовые константы
extern void testDigitConstsGroup();

// Строковые константы
extern void testStringConstsGroup();

// Пользовательские типы данных
extern void testUserTypesGroup();

// Тестирование заполнения знаков для числовых констант
extern void testDigitsPreparation();

// Тестирование функции, определяющей, является ли символ разделителем
extern void testIsSpacer();

// Тестирование функции, определяющей, является ли символ арифметическим знаком
extern void testIsSign();

// Тестирование функции, определяющей, является ли символ знаком, который может использоваться в числовых константах
extern void testIsDigit();

// Тестирование функции, определяющей, является ли символ одинарной кавычкой
extern void testIsUnaryQuote();

// Тестирование функции, определяющей, является ли символ двойной кавычкой
extern void testIsDoubleQuote();

// Тестирование функции, определяющей, является ли слово ключевым словом языка С++
extern void testIsKeyWord();

#endif //COURSEWORK_TESTS_H

#include "utils.h"
#include "../consts/consts.h"

// Подготовка к выполнению программы
void prepare() {
    fillDigits();
}

// Заполнение списка знаков, которые могут использоваться в числовых константах
void fillDigits() {
    for (int i = 0; i < 10; i++) {
        digits.push_back(to_string(i));
    }
    digits.push_back(".");
}

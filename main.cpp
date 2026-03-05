#include <iostream>

template<typename T>
T* unique(T* a, size_t s)
{
    size_t unique_pos = 0;
    for (size_t last_pos = 0; last_pos < s; ++last_pos) {
        bool duplicate = false;
        for (size_t i = 0; i < unique_pos; ++i) {
            if (a[i] == a[last_pos]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            a[unique_pos++] = a[last_pos];
        }
    }

    return a + unique_pos;
}
//1) Неявный интерфейс
//Оператор сравнения
//Присваивающий оператор копирования
//
//2) Недостатки явного интерфейся
//честно не понимаю, например можно передать неверное значение?
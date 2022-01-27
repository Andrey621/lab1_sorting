#pragma once
#include "ArraySequence.hpp"

template<typename T>
void CountSort (Sequence<T>* c) {
    for (int startIndex = 0; startIndex < c->GetSize(); startIndex++) {
// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
        int smallestIndex = startIndex;

// Затем ищем элемент поменьше в остальной части массива
        for (int currentIndex = startIndex + 1; currentIndex < c->GetSize(); ++currentIndex) {
// Если мы нашли элемент, который меньше нашего наименьшего элемента,
            if ((*c)[currentIndex] < (*c)[smallestIndex])
// то запоминаем его
                smallestIndex = currentIndex;
        }

// smallestIndex теперь наименьший элемент.
// Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
        swap((*c)[startIndex], (*c)[smallestIndex]);
    }
}
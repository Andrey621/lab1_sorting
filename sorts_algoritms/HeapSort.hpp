#pragma once
#include "ArraySequence.hpp"

template<typename T>
void heapify(Sequence<T>* c, int n, int i)
{
    int largest = i;
// Инициализируем наибольший элемент как корень
    int l = 2*i + 1; // левый = 2*i + 1
    int r = 2*i + 2; // правый = 2*i + 2

    // Если левый дочерний элемент больше корня
    if (l < n && (*c)[l] > (*c)[largest])
        largest = l;

    // Если правый дочерний элемент больше, чем самый большой элемент на данный момент
    if (r < n && (*c)[r] > (*c)[largest])
        largest = r;

    // Если самый большой элемент не корень
    if (largest != i)
    {
        swap((*c)[i], (*c)[largest]);

// Рекурсивно преобразуем в двоичную кучу затронутое поддерево
        heapify(c, n, largest);
    }
}

// Основная функция, выполняющая пирамидальную сортировку
template<typename T>
void HeapSort(Sequence<T>* c, int n)
{
    // Построение кучи (перегруппируем массив)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(c, n, i);

    // Один за другим извлекаем элементы из кучи
    for (int i = n - 1; i >= 0; i--)
    {
        // Перемещаем текущий корень в конец
        swap((*c)[0], (*c)[i]);

        // вызываем процедуру heapify на уменьшенной куче
        heapify(c, i, 0);
    }
}
#pragma once
#include "ArraySequence.hpp"

template<typename T>
void Merge(Sequence<T>* c, int first, int last)
{
    int middle, start, final, j;
    T *mas = new T[last + 1];
    middle = (first+last)/2; //вычисление среднего элемента
    start = first; //начало левой части
    final = middle+1; //начало правой части
    for(j = first; j <= last; j++) //выполнять от начала до конца
        if ((start <= middle) && ((final > last) || ((*c)[start] < (*c)[final])))
        {
            mas[j] = (*c)[start];
            start++;
        }
        else
        {
            mas[j] = (*c)[final];
            final++;
        }
//возвращение результата в список
    for (j = first; j <= last; j++) (*c)[j] = mas[j];
    delete[]mas;
};

//рекурсивная процедура сортировки
template<typename T>
void MergeSort(Sequence<T>* c, int first, int last)
{
    {
        if (first < last)
         {
            MergeSort(c, first, (first+last)/2); //сортировка левой части
            MergeSort(c, (first+last)/2 + 1, last); //сортировка правой части
            Merge(c, first, last); //слияние двух частей
        }
    }
};

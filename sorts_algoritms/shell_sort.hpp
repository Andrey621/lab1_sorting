#pragma once
#include "sequence.hpp"
#include "ArraySequence.hpp"
#include "ListSequence.hpp"

template<typename T>
void ShellSort(Sequence<T>* c)
{
    int i, j, step;
    T tmp;
    for (step = c->GetSize() / 2; step > 0; step /= 2)
        for (i = step; i < c->GetSize(); i++)
        {
            tmp = (*c)[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < (*c)[j - step])
                    (*c)[j] = (*c)[j - step];
                else
                    break;
            }
            (*c)[j] = tmp;
        }
}

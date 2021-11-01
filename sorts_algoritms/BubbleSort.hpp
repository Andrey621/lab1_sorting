#pragma once
#include "ArraySequence.hpp"
template<typename T>
void BubbleSort(Sequence<T>* c){
    for (int i = 0; i < c->GetSize(); i++) {
        for (int j = (c->GetSize() - 1); j > i; j--) {
            if ((*c)[j - 1] > (*c)[j]) {
                swap((*c)[j - 1], (*c)[j]);
            }
        }
    }
}


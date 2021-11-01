#pragma once
#include "ArraySequence.hpp"
using namespace std;
template<typename T>
void ShakerSort(Sequence<T>* c) {
    int left, right, i;
    left = 0;
    right = c->GetSize() - 1;
    while (left <= right) {
        for (i = right; i > left; i--) {
            if ((*c)[i-1] > (*c)[i]) {
                swap((*c)[i-1], (*c)[i]);
            }
        }
        left++;
        for (i = left; i <= right; i++) {
            if ((*c)[i-1] > (*c)[i]) {
                swap((*c)[i-1], (*c)[i]);
            }
        }
        right--;
    }
}

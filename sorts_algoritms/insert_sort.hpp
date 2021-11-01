#pragma once
#include "ArraySequence.hpp"
template<typename T>
void InsertSort(Sequence<T>* c){
    for( int i = 1;i < c->GetSize(); i++ ){
        for(int j = i; j > 0 && (*c)[j-1] > (*c)[j];j--){
            swap((*c)[j-1], (*c)[j]);
        }
    }
}

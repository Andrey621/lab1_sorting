#pragma once
#include "Time_Test.hpp"
void time_test_for_dim(int start_dim, int end_dim) {
    int i;
    for (i = start_dim; i <= end_dim; i += 100){
        cout << endl << "DIMENSION = " << i << " ELEMENTS" << endl << endl;
        time_test(i);
    }
}

//файл для проведения time test для массивов и списков всех размеров, входящих в диапазон значений

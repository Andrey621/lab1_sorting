#include<fstream>
#include "ISorter.hpp"
#include<cstdlib>
#include "for_creating_sequences.hpp"

template<typename T>
float equal_bubble_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_equal_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_bubble_sort.csv");
    fout<<"int_equal_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_bubble_sort.csv");
    fout<<"int_equal_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_bubble_sort.csv");
    fout<<"float_equal_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_bubble_sort.csv");
    fout<<"float_equal_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_bubble_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

template<typename T>
float equal_quick_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_equal_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_quick_sort.csv");
    fout<<"int_equal_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_quick_sort.csv");
    fout<<"int_equal_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_quick_sort.csv");
    fout<<"float_equal_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_quick_sort.csv");
    fout<<"float_equal_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = equal_quick_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

template<typename T>
float equal_shell_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_equal_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_shell_sort.csv");
    fout<<"int_equal_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shell_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_shell_sort.csv");
    fout<<"int_equal_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shell_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_shell_sort.csv");
    fout<<"float_equal_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shell_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_shell_sort.csv");
    fout<<"float_equal_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shell_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


template<typename T>
float equal_shaker_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShakerSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShakerSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_equal_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_shaker_sort.csv");
    fout<<"int_equal_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shaker_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_shaker_sort.csv");
    fout<<"int_equal_list_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shaker_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_shaker_sort.csv");
    fout<<"float_equal_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shaker_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_shaker_sort.csv");
    fout<<"float_equal_list_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_shaker_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

template<typename T>
float equal_insert_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        InsertSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        InsertSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_equal_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_insert_sort.csv");
    fout<<"int_equal_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_insert_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_equal_list_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_insert_sort.csv");
    fout<<"int_equal_list_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_insert_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_insert_sort.csv");
    fout<<"float_equal_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_insert_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_insert_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_insert_sort.csv");
    fout<<"float_equal_list_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_insert_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

template<typename T>
float equal_merge_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeEqualSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        MergeSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeEqualSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        MergeSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_equal_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_array_merge_sort.csv");
    fout<<"int_equal_array_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_merge_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_equal_list_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_equal_list_merge_sort.csv");
    fout<<"int_equal_list_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_merge_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_array_merge_sort.csv");
    fout<<"float_equal_array_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_merge_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_equal_list_merge_sort(){
    float time;
    ofstream fout;
    fout.open("float_equal_list_merge_sort.csv");
    fout<<"float_equal_list_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = equal_merge_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}



//для отсортированных массивов и списков

template<typename T>
float sorted_bubble_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        BubbleSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_sorted_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_bubble_sort.csv");
    fout<<"int_sorted_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_sorted_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_bubble_sort.csv");
    fout<<"int_sorted_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_bubble_sort.csv");
    fout<<"float_sorted_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_bubble_sort.csv");
    fout<<"float_sorted_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_bubble_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


template<typename T>
float sorted_quick_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        QuickSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_sorted_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_quick_sort.csv");
    fout<<"int_sorted_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_sorted_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_quick_sort.csv");
    fout<<"int_sorted_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_quick_sort.csv");
    fout<<"float_sorted_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_quick_sort.csv");
    fout<<"float_sorted_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_quick_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


template<typename T>
float sorted_shell_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShellSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_sorted_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_shell_sort.csv");
    fout<<"int_sorted_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}


void for_int_sorted_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_shell_sort.csv");
    fout<<"int_sorted_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_shell_sort.csv");
    fout<<"float_sorted_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_shell_sort.csv");
    fout<<"float_sorted_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shell_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


template<typename T>
float sorted_shaker_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShakerSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        ShakerSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_sorted_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_shaker_sort.csv");
    fout<<"int_sorted_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shaker_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}


void for_int_sorted_list_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_shaker_sort.csv");
    fout<<"int_sorted_list_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shaker_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_shaker_sort.csv");
    fout<<"float_sorted_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shaker_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_shaker_sort.csv");
    fout<<"float_sorted_list_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_shaker_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


template<typename T>
float sorted_insert_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        InsertSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        InsertSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}
void for_int_sorted_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_insert_sort.csv");
    fout<<"int_sorted_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_insert_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_sorted_list_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_insert_sort.csv");
    fout<<"int_sorted_list_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_insert_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_insert_sort.csv");
    fout<<"float_sorted_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_insert_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_insert_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_insert_sort.csv");
    fout<<"float_sorted_list_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = sorted_insert_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

template<typename T>
float sorted_merge_sort_help(int dimension, bool choice){
    if(choice) {
        T *array = makeSortedSequence<T>(dimension);
        ArraySequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        MergeSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
    else{
        T *array = makeSortedSequence<T>(dimension);
        ListSequence<T> a(array, dimension);
        Sequence<T> *pointer = &a;
        MergeSorter<T> w;
        auto start_time = chrono::steady_clock::now();
        w.sort(pointer);
        auto end_time = chrono::steady_clock::now();
        float time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
        return time;
    }
}

void for_int_sorted_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_array_merge_sort.csv");
    fout<<"int_sorted_array_merge_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_merge_sort_help<int>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_sorted_list_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_sorted_list_merge_sort.csv");
    fout<<"int_sorted_list_merge_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_merge_sort_help<int>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_array_merge_sort.csv");
    fout<<"float_sorted_array_merge_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_merge_sort_help<float>(i, true);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_sorted_list_merge_sort(){
    float time;
    ofstream fout;
    fout.open("float_sorted_list_merge_sort.csv");
    fout<<"float_sorted_list_merge_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = sorted_merge_sort_help<float>(i, false);
        fout<<time<<"\n";
    }
    fout.close();
}


#include<fstream>
#include "ISorter.hpp"
#include<cstdlib>
#include "for_creating_sequences.hpp"

//Пузырьковая сортировка
template<typename T>
float BubbleSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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
void for_int_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_bubble_sort.csv");
    fout<<"int_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_bubble_sort.csv");
    fout<<"float_array_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_bubble_sort.csv");
    fout<<"int_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_bubble_sort(){
    float time;
    ofstream fout;
    fout.open("float_list_bubble_sort.csv");
    fout<<"float_list_bubble_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = BubbleSortHelp<float>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
//Быстрая сортировка
template<typename T>
float QuickSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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

void for_int_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_quick_sort.csv");
    fout<<"int_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_quick_sort.csv");
    fout<<"float_array_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_quick_sort.csv");
    fout<<"int_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_quick_sort(){
    float time;
    ofstream fout;
    fout.open("float_list_quick_sort.csv");
    fout<<"float_list_quick_sort"<<"\n";
    for(int i = 1; i < 1000; i+=20){
        time = QuickSortHelp<float>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}

//сортировка Шелла
template<typename T>
float ShellSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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
void for_int_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_shell_sort.csv");
    fout<<"int_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_shell_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_shell_sort.csv");
    fout<<"float_array_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_int_list_shell_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_shell_sort.csv");
    fout<<"int_list_shell_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShellSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_list_shell_sort() {
    float time;
    ofstream fout;
    fout.open("float_list_shell_sort.csv");
    fout << "float_list_shell_sort" << "\n";
    for (int i = 0; i < 1000; i += 20) {
        time = ShellSortHelp<float>(i, 2);
        fout << time << "\n";
    }
    fout.close();
}

//шейкерная сортировка

template<typename T>
float ShakerSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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

void for_int_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_shaker_sort.csv");
    fout<<"int_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShakerSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_shaker_sort.csv");
    fout<<"float_array_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShakerSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_shaker_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_shaker_sort.csv");
    fout<<"int_list_shaker_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = ShakerSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_list_shaker_sort() {
    float time;
    ofstream fout;
    fout.open("float_list_shaker_sort.csv");
    fout << "float_list_shaker_sort" << "\n";
    for (int i = 0; i < 1000; i += 20) {
        time = ShakerSortHelp<float>(i, 2);
        fout << time << "\n";
    }
    fout.close();
}

//сортировка вставками

template<typename T>
float InsertSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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

void for_int_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_insert_sort.csv");
    fout<<"int_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = InsertSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}
void for_float_array_insert_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_insert_sort.csv");
    fout<<"float_array_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = InsertSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_insert_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_insert_sort.csv");
    fout<<"int_list_insert_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = InsertSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_list_insert_sort() {
    float time;
    ofstream fout;
    fout.open("float_list_insert_sort.csv");
    fout << "float_list_insert_sort" << "\n";
    for (int i = 0; i < 1000; i += 20) {
        time = InsertSortHelp<float>(i, 2);
        fout << time << "\n";
    }
    fout.close();
}

//сортировка слиянием

template<typename T>
float MergeSortHelp(int dimension, int choose){
    if(choose == 1) {
        T *array = MakeRandomSequence<T>(dimension);
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
        T *array = MakeRandomSequence<T>(dimension);
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

void for_int_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_array_merge_sort.csv");
    fout<<"int_array_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = MergeSortHelp<int>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_array_merge_sort(){
    float time;
    ofstream fout;
    fout.open("float_array_merge_sort.csv");
    fout<<"float_array_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = MergeSortHelp<float>(i, 1);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_int_list_merge_sort(){
    float time;
    ofstream fout;
    fout.open("int_list_merge_sort.csv");
    fout<<"int_list_merge_sort"<<"\n";
    for(int i = 0; i < 1000; i+=20){
        time = MergeSortHelp<int>(i, 2);
        fout<<time<<"\n";
    }
    fout.close();
}

void for_float_list_merge_sort() {
    float time;
    ofstream fout;
    fout.open("float_list_merge_sort.csv");
    fout << "float_list_merge_sort" << "\n";
    for (int i = 0; i < 1000; i += 20) {
        time = MergeSortHelp<float>(i, 2);
        fout << time << "\n";
    }
    fout.close();
}

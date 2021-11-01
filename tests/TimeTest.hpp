#pragma once
#include<cstdlib>
#include "ISorter.hpp"
#include "time_struct.hpp"
#include <cassert>
#include <chrono>
#include "for_creating_sequences.hpp"

for_time time_test_int_for_array(int dimension){
    int* array = MakeRandomSequence<int>(dimension);
    ArraySequence<int> a(array, dimension);
    ArraySequence<int> b(array, dimension);
    ArraySequence<int> c(array, dimension);
    ArraySequence<int> d(array, dimension);
    ArraySequence<int> f(array, dimension);
    ArraySequence<int> g(array, dimension);
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    ShakerSorter<int> r;
    InsertSorter<int> t;
    MergeSorter<int> y;
    Sequence<int>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &d;
    start_time = chrono::steady_clock::now();
    r.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &f;
    start_time = chrono::steady_clock::now();
    t.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &g;
    start_time = chrono::steady_clock::now();
    y.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_float_for_array(int dimension){
    float* array = MakeRandomSequence<float>(dimension);
    ArraySequence<float> a(array, dimension);
    ArraySequence<float> b(array, dimension);
    ArraySequence<float> c(array, dimension);
    ArraySequence<float> d(array, dimension);
    ArraySequence<float> f(array, dimension);
    ArraySequence<float> g(array, dimension);
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    ShakerSorter<float> r;
    InsertSorter<float> t;
    MergeSorter<float> y;
    Sequence<float>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &d;
    start_time = chrono::steady_clock::now();
    r.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &f;
    start_time = chrono::steady_clock::now();
    t.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &g;
    start_time = chrono::steady_clock::now();
    y.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_int_for_list(int dimension){
    int* array = MakeRandomSequence<int>(dimension);
    ListSequence<int> a(array, dimension);
    ListSequence<int> b(array, dimension);
    ListSequence<int> c(array, dimension);
    ListSequence<int> d(array, dimension);
    ListSequence<int> f(array, dimension);
    ListSequence<int> g(array, dimension);
    BubbleSorter<int> q;
    QuickSorter<int> w;
    ShellSorter<int> e;
    ShakerSorter<int> r;
    InsertSorter<int> t;
    MergeSorter<int> y;
    Sequence<int>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &d;
    start_time = chrono::steady_clock::now();
    r.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &f;
    start_time = chrono::steady_clock::now();
    t.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &g;
    start_time = chrono::steady_clock::now();
    y.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

for_time time_test_float_for_list(int dimension){
    float* array = MakeRandomSequence<float>(dimension);
    ListSequence<float> a(array, dimension);
    ListSequence<float> b(array, dimension);
    ListSequence<float> c(array, dimension);
    ListSequence<float> d(array, dimension);
    ListSequence<float> f(array, dimension);
    ListSequence<float> g(array, dimension);
    BubbleSorter<float> q;
    QuickSorter<float> w;
    ShellSorter<float> e;
    ShakerSorter<float> r;
    InsertSorter<float> t;
    MergeSorter<float> y;
    Sequence<float>* pointer;
    for_time time;
    pointer = &a;
    auto start_time = chrono::steady_clock::now();
    q.sort(pointer);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &b;
    start_time = chrono::steady_clock::now();
    w.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &c;
    start_time = chrono::steady_clock::now();
    e.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &d;
    start_time = chrono::steady_clock::now();
    r.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &f;
    start_time = chrono::steady_clock::now();
    t.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    pointer = &g;
    start_time = chrono::steady_clock::now();
    y.sort(pointer);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}

void print_result(const string &test, for_time time){
    cout<<test<<"\n";
    cout<<"Bubble sort time"<<" "<<time.bubble_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Shaker sort time"<<" "<<time.shaker_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Insert sort time"<<" "<<time.insert_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Merge sort time"<<" "<<time.merge_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Shell sort time"<<" "<<time.shell_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"Quick sort time"<<" "<<time.quick_sort_time<<" "<<"microseconds"<<"\n";
    cout<<"\n";
}

void time_test(int dimension){
    print_result("Test for int array",time_test_int_for_array(dimension));
    print_result("Test for float array",time_test_float_for_array(dimension));
    print_result("Test for int list",time_test_int_for_list(dimension));
    print_result("Test for float list",time_test_float_for_list(dimension));
}

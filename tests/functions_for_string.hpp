#pragma once
#include "string"
#include "StringSort.hpp"
using namespace std;
string sorted_string = "abcdefghijklmnopqrstuvwxyz";
string reversed_string = "zyxwvutsrqponmlkjihgfedcba";

int random_string_dimension = 26;

string MakeRandomString(int dim) {
    srand(time(NULL));
    string f = "";
    for (int i = 0; i < dim - 1; i++) {
        int key = rand() % 25;
        f += sorted_string[key];
    }
    return f;
}

void PrintRandomString (string mystring){
    cout << "Original random string of dimension " << random_string_dimension << ":" << endl;
    for (int i = 0; i < random_string_dimension; i++){
        cout << mystring[i];
    }
    cout << "\n" << "\n";
}

string random_string = MakeRandomString(random_string_dimension);


void print_result_for_sorted_string(){
    cout << "Original string: " << "\t" << sorted_string << "\n" << "\n";
    cout << "Bubble Sort: " << "\t"<< bubble(sorted_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(sorted_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(sorted_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(sorted_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(sorted_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(sorted_string) << "\n";
    cout << "Heap Sort: " << "\t"<< heap(sorted_string) << "\n";
    cout << "Count Sort: " << "\t"<< count(sorted_string) << "\n";
}

void print_result_for_reversed_string(){
    cout << "Original string: " << "\t" << reversed_string << "\n" << "\n";
    cout << "Bubble Sort: "<< "\t"<< bubble(reversed_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(reversed_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(reversed_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(reversed_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(reversed_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(reversed_string) << "\n";
    cout << "Heap Sort: " << "\t"<< heap(reversed_string) << "\n";
    cout << "Count Sort: " << "\t"<< count(reversed_string) << "\n";
}

void print_result_for_random_string(){
    string random_string = MakeRandomString(random_string_dimension);
    PrintRandomString(random_string);
    cout << "Bubble Sort: "<< "\t"<< bubble(random_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(random_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(random_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(random_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(random_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(random_string) << "\n";
    cout << "Heap Sort: " << "\t"<< heap(random_string) << "\n";
    cout << "Count Sort: " << "\t"<< count(random_string) << "\n";
}


void print_result_for_keyboard_string(){
    string keyboard_string;
    cin >> keyboard_string;
    cout << "Original string: " << "\t" << keyboard_string << "\n" << "\n";
    cout << "Bubble Sort: "<< "\t"<< bubble(keyboard_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(keyboard_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(keyboard_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(keyboard_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(keyboard_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(keyboard_string) << "\n";
    cout << "Heap Sort: " << "\t"<< heap(keyboard_string) << "\n";
    cout << "Count Sort: " << "\t"<< count(keyboard_string) << "\n";
}



for_time time_test_for_sorted_string(){
    for_time time;
    auto start_time = chrono::steady_clock::now();
    bubble(sorted_string);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shaker(sorted_string);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    insert(sorted_string);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    merge(sorted_string);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shell(sorted_string);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    quick(sorted_string);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    heap(sorted_string);
    end_time = chrono::steady_clock::now();
    time.heap_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    count(sorted_string);
    end_time = chrono::steady_clock::now();
    time.count_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}


for_time time_test_for_reversed_string(){
    for_time time;
    auto start_time = chrono::steady_clock::now();
    bubble(reversed_string);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shaker(reversed_string);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    insert(reversed_string);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    merge(reversed_string);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shell(reversed_string);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    quick(reversed_string);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    heap(reversed_string);
    end_time = chrono::steady_clock::now();
    time.heap_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    count(reversed_string);
    end_time = chrono::steady_clock::now();
    time.count_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}


for_time time_test_for_random_string(){
    for_time time;
    auto start_time = chrono::steady_clock::now();
    bubble(random_string);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shaker(random_string);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    insert(random_string);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    merge(random_string);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shell(random_string);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    quick(random_string);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    heap(random_string);
    end_time = chrono::steady_clock::now();
    time.heap_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    count(random_string);
    end_time = chrono::steady_clock::now();
    time.count_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}


for_time time_test_for_keyboard_string(){
    for_time time;
    string keyboard_string;
    cin >> keyboard_string;
    auto start_time = chrono::steady_clock::now();
    bubble(keyboard_string);
    auto end_time = chrono::steady_clock::now();
    time.bubble_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shaker(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.shaker_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    insert(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.insert_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    merge(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.merge_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    shell(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.shell_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    quick(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.quick_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    heap(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.heap_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    start_time = chrono::steady_clock::now();
    count(keyboard_string);
    end_time = chrono::steady_clock::now();
    time.count_sort_time = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    return time;
}



void print_time(const string &test, for_time time){
    cout << "\n"<<test<<"\n";
    cout << "Bubble sort time" << " " << time.bubble_sort_time << " " << "microseconds" << "\n";
    cout << "Shaker sort time" << " " << time.shaker_sort_time << " " << "microseconds" << "\n";
    cout << "Insert sort time" << " " << time.insert_sort_time << " " << "microseconds" << "\n";
    cout << "Merge sort time" << " " << time.merge_sort_time << " " << "microseconds" << "\n";
    cout << "Shell sort time" << " " << time.shell_sort_time << " " << "microseconds" << "\n";
    cout << "Quick sort time" << " " << time.quick_sort_time << " " << "microseconds" << "\n";
    cout << "Heap sort time" << " " << time.heap_sort_time << " " << "microseconds" << "\n";
    cout << "Count sort time" << " " << time.count_sort_time << " " << "microseconds" << "\n";
    cout << "\n";
}

void print_time_for_sorted_string(){
    cout << "Original string: " << "\t" << sorted_string << "\n" << "\n";
    print_time("Time for sorted string: \n",time_test_for_sorted_string());
}

void print_time_for_reversed_string(){
    cout << "Original string: " << "\t" << reversed_string << "\n" << "\n";
    print_time("Time for sorted string: \n",time_test_for_reversed_string());
}

void print_time_for_random_string(){
    cout << "Original string: " << "\t" << random_string << "\n" << "\n";
    print_time("Time for sorted string: \n",time_test_for_random_string());
}

void print_time_for_keyboard_string(){
    print_time("Time for keyboard string: \n",time_test_for_keyboard_string());
}


void print_time_for_all_strings(){
    print_time_for_sorted_string();
    print_time_for_reversed_string();
    print_time_for_random_string();
    print_time_for_keyboard_string();
}
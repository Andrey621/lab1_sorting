#pragma once
#include "string"
#include "StringSort.hpp"
using namespace std;
string sorted_string = "abcdefghijklmnopqrstuvwxyz";
string reversed_string = "zyxwvutsrqponmlkjihgfedcba";

int random_string_dimension = 20;

string MakeRandomString(int random_string_dimension) {
    srand(time(NULL));
    string f = "";
    for (int i = 0; i < random_string_dimension - 1; i++) {
        int key = rand() % 25;
        f += sorted_string[key];
    }
    return f;
}

void PrintRandomString (string mystring){
    for (int i = 0; i < random_string_dimension; i++){
        cout << mystring[i];
    }
    cout << "\n" ;
}

string random_string = MakeRandomString(random_string_dimension);


void print_result_for_sorted_string(){
    cout << "Bubble Sort: "<< "\t"<< bubble(sorted_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(sorted_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(sorted_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(sorted_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(sorted_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(sorted_string) << "\n";
}

void print_result_for_reversed_string(){
    cout << "Bubble Sort: "<< "\t"<< bubble(reversed_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(reversed_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(reversed_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(reversed_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(reversed_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(reversed_string) << "\n";
}

void print_result_for_random_string(){
    PrintRandomString(random_string);
    cout << "Bubble Sort: "<< "\t"<< bubble(random_string) << "\n";
    cout << "Quick Sort: " << "\t"<< quick(random_string) << "\n";
    cout << "Shell Sort: " << "\t"<< shell(random_string) << "\n";
    cout << "Shaker Sort: " << "\t"<< shaker(random_string) << "\n";
    cout << "Insert Sort: " << "\t"<< insert(random_string) << "\n";
    cout << "Merge Sort: " << "\t"<< merge(random_string) << "\n";
}


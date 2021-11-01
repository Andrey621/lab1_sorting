#pragma once
#include "for_files.hpp"
#include "for_files_border_cases.hpp"

// КАЖДАЯ СОРТИРОВКА ДЛЯ СЛУЧАЙНЫХ ДАННЫХ

void shell_random_files(){
    for_int_array_shell_sort();
    for_float_array_shell_sort();
    for_int_list_shell_sort();
    for_float_list_shell_sort();
}
void bubble_random_files(){
    for_int_array_bubble_sort();
    for_float_array_bubble_sort();
    for_int_list_bubble_sort();
    for_float_list_bubble_sort();
}

void quick_random_files(){
    for_int_array_quick_sort();
    for_float_array_quick_sort();
    for_int_list_quick_sort();
    for_float_list_quick_sort();
}

void shaker_random_files(){
    for_int_array_shaker_sort();
    for_float_array_shaker_sort();
    for_int_list_shaker_sort();
    for_float_list_shaker_sort();
}

void insert_random_files(){
    for_int_array_insert_sort();
    for_float_array_insert_sort();
    for_int_list_insert_sort();
    for_float_list_insert_sort();
}

void merge_random_files(){
    for_int_array_merge_sort();
    for_float_array_merge_sort();
    for_int_list_merge_sort();
    for_float_list_merge_sort();
}

//ДЛЯ МАССИВОВ И СПИСКОВ С РАВНЫМИ ЭЛЕМЕНТАМИ

void bubble_equal_files(){
    for_int_equal_array_bubble_sort();
    for_int_equal_list_bubble_sort();
    for_float_equal_array_bubble_sort();
    for_float_equal_list_bubble_sort();
}
void quick_equal_files(){
    for_int_equal_array_quick_sort();
    for_int_equal_list_quick_sort();
}
void shell_equal_files(){
    for_int_equal_array_shell_sort();
    for_int_equal_list_shell_sort();
}

void shaker_equal_files(){
    for_int_equal_array_shaker_sort();
    for_int_equal_list_shaker_sort();
}

void insert_equal_files(){
    for_int_equal_array_insert_sort();
    for_int_equal_list_insert_sort();
}

void merge_equal_files(){
    for_int_equal_array_merge_sort();
    for_int_equal_list_merge_sort();
}

//ДЛЯ ОТСОРТИРОВАННЫХ ПО УБЫВАНИЮ МАССИВОВ И СПИСКОВ

void bubble_sorted_files(){
    for_int_sorted_array_bubble_sort();
    for_int_sorted_list_bubble_sort();
}
void quick_sorted_files(){
    for_int_sorted_array_quick_sort();
    for_int_sorted_list_quick_sort();
}
void shell_sorted_files(){
    for_int_sorted_array_shell_sort();
    for_int_sorted_list_shell_sort();
}

void shaker_sorted_files(){
    for_int_sorted_array_shaker_sort();
    for_int_sorted_list_shaker_sort();
}


void insert_sorted_files(){
    for_int_sorted_array_insert_sort();
    for_int_sorted_list_insert_sort();
}

void merge_sorted_files(){
    for_int_sorted_array_merge_sort();
    for_int_sorted_list_merge_sort();
}


//сравнение шести алгоритмов сортировки на разных структкрах данных
//СЛУЧАЙНЫЕ ЭЛЕМЕНТЫ

void random_int_array_files(){
    for_int_array_bubble_sort();
    for_int_array_quick_sort();
    for_int_array_shell_sort();
    for_int_array_shaker_sort();
    for_int_array_insert_sort();
    for_int_array_merge_sort();
}

void random_float_array_files(){
    for_float_array_bubble_sort();
    for_float_array_quick_sort();
    for_float_array_shell_sort();
    for_float_array_shaker_sort();
    for_float_array_insert_sort();
    for_float_array_merge_sort();
}

void random_int_list_files(){
    for_int_list_bubble_sort();
    for_int_list_quick_sort();
    for_int_list_shell_sort();
    for_int_list_shaker_sort();
    for_int_list_insert_sort();
    for_int_list_merge_sort();
}

void random_float_list_files(){
    for_float_list_bubble_sort();
    for_float_list_quick_sort();
    for_float_list_shell_sort();
    for_float_list_shaker_sort();
    for_float_list_insert_sort();
    for_float_list_merge_sort();
}

//РАВНЫЕ ЭЛЕМЕНТЫ

void equal_int_array_files(){
    for_int_equal_array_bubble_sort();
    for_int_equal_array_quick_sort();
    for_int_equal_array_shell_sort();
    for_int_equal_array_shaker_sort();
    for_int_equal_array_insert_sort();
    for_int_equal_array_merge_sort();
}

void equal_int_list_files(){
    for_int_equal_list_bubble_sort();
    for_int_equal_list_quick_sort();
    for_int_equal_list_shell_sort();
    for_int_equal_list_shaker_sort();
    for_int_equal_list_insert_sort();
    for_int_equal_list_merge_sort();
}

void equal_float_array_files(){
    for_float_equal_array_bubble_sort();
    for_float_equal_array_quick_sort();
    for_float_equal_array_shell_sort();
    for_float_equal_array_shaker_sort();
    for_float_equal_array_insert_sort();
    for_float_equal_array_merge_sort();
}

void equal_float_list_files(){
    for_float_equal_list_bubble_sort();
    for_float_equal_list_quick_sort();
    for_float_equal_list_shell_sort();
    for_float_equal_list_shaker_sort();
    for_float_equal_list_insert_sort();
    for_float_equal_list_merge_sort();
}

//МАССИВ ИЛИ СПИСОК ОТСОРТИРОВАН

void sorted_int_array_files(){
    for_int_sorted_array_bubble_sort();
    for_int_sorted_array_quick_sort();
    for_int_sorted_array_shell_sort();
    for_int_sorted_array_shaker_sort();
    for_int_sorted_array_insert_sort();
    for_int_sorted_array_merge_sort();
}

void sorted_int_list_files(){
    for_int_sorted_list_bubble_sort();
    for_int_sorted_list_quick_sort();
    for_int_sorted_list_shell_sort();
    for_int_sorted_list_shaker_sort();
    for_int_sorted_list_insert_sort();
    for_int_sorted_list_merge_sort();
}

void sorted_float_array_files(){
    for_float_sorted_array_bubble_sort();
    for_float_sorted_array_quick_sort();
    for_float_sorted_array_shell_sort();
    for_float_sorted_array_shaker_sort();
    for_float_sorted_array_insert_sort();
    for_float_sorted_array_merge_sort();
}

void sorted_float_list_files(){
    for_float_sorted_list_bubble_sort();
    for_float_sorted_list_quick_sort();
    for_float_sorted_list_shell_sort();
    for_float_sorted_list_shaker_sort();
    for_float_sorted_list_insert_sort();
    for_float_sorted_list_merge_sort();
}

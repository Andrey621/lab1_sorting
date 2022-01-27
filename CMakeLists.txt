cmake_minimum_required(VERSION 3.19)
project(sorting)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorting main.cpp ArraySequence.hpp DynamicArray.hpp LinkedList.hpp ListSequence.hpp sequence.hpp for_files.hpp for_files_border_cases.hpp visualisation_functions.hpp BubbleSort.hpp InsertSort.hpp MergeSort.hpp QuickSort.hpp ShakerSort.hpp ShellSort.hpp Time_Test.hpp for_creating_sequences.hpp test_for_keyboard_data.hpp test_for_ready_data.hpp time_struct.hpp time_test_for_dim.hpp ISorter.hpp StringSort.hpp functions_for_string.hpp HeapSort.hpp CountSort.hpp)
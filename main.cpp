#include <iostream>
#include "test_for_keyboard_data.hpp"
#include "test_for_ready_data.hpp"
#include "Time_Test.hpp"
#include "ISorter.hpp"
#include "QuickSort.hpp"
#include "ShellSort.hpp"
#include "time_test_for_dim.hpp"
#include "visualisation_functions.hpp"
using namespace std;

// меню для взаимодействия с пользователем
int main() {
    int k = 0;
    int zero = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int fifth = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    while (first != 4) {
        cout << endl << "Choose Test:" << endl;
        cout << "1. Test on ready data" << endl << "2. Test on keyboard data" << endl << "3. Time test" << endl << "4. Exit"
             << "\n";
        cin >> first;
        cout << "\n";
        switch (first) {
            case 1: {
                second = 0;
                while (second != 3) {
                    cout << endl << "Choose Type:" << endl;
                    cout << "1. Int data" << endl << "2. Float data" << endl << "3. Back" << endl;
                    cin >> second;
                    cout << "\n";
                    switch (second) {
                        case 1: {
                            third = 0;
                            while (third != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Dynamic array" << endl << "2. Linked list" << endl << "3. Back" << endl;
                                cin >> third;
                                cout << "\n";
                                switch (third) {
                                    case 1: {
                                        ready_int_sort_test(1);
                                        break;
                                    }
                                    case 2: {
                                        ready_int_sort_test(2);
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default:
                                        cout << "Enter a number from the list";
                                        break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            fourth = 0;
                            while (fourth != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Dynamic array" << endl << "2. Linked list" << endl << "3. Back" << endl;
                                cin >> fourth;
                                cout << "\n";
                                switch (fourth) {
                                    case 1: {
                                        ready_float_sort_test(1);
                                        break;
                                    }
                                    case 2: {
                                        ready_float_sort_test(2);
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default:
                                        cout << "Enter a number from the list";
                                        break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            break;
                        }
                        default: {
                            cout << "Enter a number from the list";
                            break;
                        }
                    }
                }
                break;
            }
            case 2: {
                fifth = 0;
                while (fifth != 3) {
                    cout << endl << "Choose Type:" << endl;
                    cout << "1. Int data" << endl << "2. Float data" << endl << "3. Back" << endl;
                    cin >> fifth;
                    cout << "\n";
                    switch (fifth) {
                        case 1: {
                            six = 0;
                            while (six != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Dynamic array" << endl << "2. Linked list" << endl << "3. Back" << endl;
                                cin >> six;
                                cout << "\n";
                                switch (six) {
                                    case 1: {
                                        keyboard_int_test(1);
                                        break;
                                    }
                                    case 2: {
                                        keyboard_int_test(2);
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list";
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        case 2: {
                            seven = 0;
                            while (seven != 3) {
                                cout << endl << "Choose Container:" << endl;
                                cout << "1. Dynamic array" << endl << "2. Linked list" << endl << "3. Back" << endl;
                                cin >> seven;
                                cout << "\n";
                                switch (seven) {
                                    case 1: {
                                        keyboard_float_test(1);
                                        break;
                                    }
                                    case 2: {
                                        keyboard_float_test(2);
                                        break;
                                    }
                                    case 3: {
                                        break;
                                    }
                                    default: {
                                        cout << "Enter a number from the list";
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                        case 3: {
                            break;
                        }
                        default: {
                            cout << "Enter a number from the list";
                            break;
                        }
                    }
                }
                break;
            }
            case 3: {
                time_test_for_dim(1000,1000);
                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "Enter a number from the list";
                break;
            }
        }
    }

}
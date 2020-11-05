#pragma once
#include <iostream>
#include "add_menu_draw.h"
#include "human.h"
#include "student.h"
using namespace std;

void show_by_marital() {
    int marital;
    cout << "Input marital status to find(1 - have, 0 - haven't): ";
    cin >> marital;
    system("cls");

    if (marital == 1) {
        cout << "Students with positive marital status: " << endl;
        for (size_t students_counter = 0; students_counter < 20; students_counter++) {
            if (Array_of_students[students_counter].Get_Marital_Status() == "1") {
                cout << Array_of_students[students_counter].Get_Name() << ' ' << Array_of_students[students_counter].Get_Surname() << endl;
            }
        }
    }
    else if (marital == 0) {
        cout << "Students with negative marital status: " << endl;
        for (size_t students_counter = 0; students_counter < 20; students_counter++) {
            if (Array_of_students[students_counter].Get_Marital_Status() == "0") {
                cout << Array_of_students[students_counter].Get_Name() << ' ' << Array_of_students[students_counter].Get_Surname() << endl;
            }
        }
    }
}

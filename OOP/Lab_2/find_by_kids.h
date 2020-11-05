#pragma once
#include <iostream>
#include "add_menu_draw.h"
#include "human.h"
#include "student.h"
using namespace std;

void show_by_kids() {
    int kids;
    cout << "Input kids status to find(1 - have, 0 - haven't): ";
    cin >> kids;
    system("cls");

    if (kids == 1) {
        cout << "Students who have a kids: " << endl;
        for (size_t students_counter = 0; students_counter < 20; students_counter++) {
            if (Array_of_students[students_counter].Get_Kids() == "1") {
                cout << Array_of_students[students_counter].Get_Name() << ' ' << Array_of_students[students_counter].Get_Surname() << endl;
            }
        }
    }
    else if (kids == 0) {
        cout << "Students who haven't kids: " << endl;
        for (size_t students_counter = 0; students_counter < 20; students_counter++) {
            if (Array_of_students[students_counter].Get_Kids() == "0") {
                cout << Array_of_students[students_counter].Get_Name() << ' ' << Array_of_students[students_counter].Get_Surname() << endl;
            }
        }
    }
}

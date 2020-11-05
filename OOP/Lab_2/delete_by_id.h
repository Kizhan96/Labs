#pragma once
#include <iostream>
#include "add_menu_draw.h"
#include "human.h"
#include "student.h"
using namespace std;

void delete_by_id() {
    int del_id;
    cout << "Input student id to delete: ";
    cin >> del_id;
    system("cls");
    for (size_t student_counter = 0; student_counter < 20; student_counter++) {
        if (del_id == student_counter) {

        }
    }
    
}

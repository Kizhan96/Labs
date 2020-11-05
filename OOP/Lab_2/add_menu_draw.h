#pragma once
#include <iostream>
#include "student.h"
using namespace std;

extern student* Array_of_students = new student[20];
int student_id = 1;

void add_menu_draw(int chooser, int id) {
    string tmp = "";
    system("cls");
    cout << "************************************************************************************************************" << endl;
    cout << "Input surname: ";
    cin >> tmp;
    Array_of_students[id].Set_Surname(tmp);
    cout << endl << "Input name: ";
    cin >> tmp;
    Array_of_students[id].Set_Name(tmp);
    cout << endl << "Input city: ";
    cin >> tmp;
    Array_of_students[id].Set_City(tmp);
    cout << endl << "Input marital status: ";
    cin >> tmp;
    Array_of_students[id].Set_Marital_Status(tmp);
    cout << endl << "Input number of kids (if they exist): ";
    cin >> tmp;
    Array_of_students[id].Set_Kids(tmp);
    cout << endl << "Input race: ";
    cin >> tmp;
    Array_of_students[id].set_race(tmp);
    cout << endl << "Input age: ";
    cin >> tmp;
    Array_of_students[id].set_age(tmp);
    cout << endl << "Input heigth: ";
    cin >> tmp;
    Array_of_students[id].set_height(tmp);
    cout << endl << "Input weigth: ";
    cin >> tmp;
    Array_of_students[id].set_weight(tmp);
    student_id++;
    cout << "************************************************************************************************************" << endl;
}

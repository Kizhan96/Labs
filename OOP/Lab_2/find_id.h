#pragma once
#include <iostream>
#include "add_menu_draw.h"
using namespace std;
void show_by_id() {
    int id;
    cout << "Input id to find: ";
    cin >> id;
    system("cls");
    cout << "Found students: " << endl;
    cout << id << ") " << Array_of_students[id].Get_Name() << ' ' << Array_of_students[id].Get_Surname();
}

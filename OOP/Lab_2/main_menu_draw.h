#pragma once
#include <conio.h>
using namespace std;

void main_menu_draw(int chooser) {
    system("cls");
    cout << "************************************************************************************************************" << endl;
    string arrow = "->",
        a = "\t1. Add a new student into DB.",
        b = "\t2. Show by ID.",
        c = "\t3. Show by marital status.",
        d = "\t4. Show by having kinds.",
        e = "\t5. Delete by id.",
        f = "\t6. Exit.";   
    switch (chooser) {
    case 1:
        cout << arrow + a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
        break;
    case 2:
        cout << a << endl;
        cout << arrow + b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
        break;
    case 3:
        cout << a << endl;
        cout << b << endl;
        cout << arrow + c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
        break;
    case 4:
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << arrow + d << endl;
        cout << e << endl;
        cout << f << endl;
        break;
    case 5:
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << arrow + e << endl;
        cout << f << endl;
        break;
    case 6:
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << arrow + f << endl;
        break;
    }
    cout << "************************************************************************************************************" << endl;
}

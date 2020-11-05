#include <iostream>
#include <conio.h>
#include "human.h"
#include "student.h"
#include "add_menu_draw.h"
#include "main_menu_draw.h"
#include "find_id.h"
#include "find_by_marital.h"
#include "find_by_kids.h"
#include "delete_by_id.h"
using namespace std;

int main() {
    int number_of_students = 0, main_menu_chooser = 1;
    while (true) {
        switch (_getch()) {
        case 72:
            main_menu_chooser--;
            if (main_menu_chooser < 1) main_menu_chooser = 6;
            break;
        case 80:
            main_menu_chooser++;
            if (main_menu_chooser > 6) main_menu_chooser = 1;
            break;
        case 13:
            switch (main_menu_chooser) {
            case 1:
                add_menu_draw(main_menu_chooser, student_id);
                break;
            case 2:
                show_by_id();
                system("pause");
                break;
            case 3:
                show_by_marital();
                system("pause");
                break;
            case 4:
                show_by_kids();
                system("pause");
                break;
            case 5:
                delete_by_id();
                system("pause");
                break;
            case 6: exit(0);
                break;
            }
        }
        main_menu_draw(main_menu_chooser);
    }
    return 0;
}

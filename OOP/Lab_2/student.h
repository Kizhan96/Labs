#pragma once
#include <string>
#include "human.h"
using namespace std;

class student :public human {
public:
    student();

    void Set_Name(string tmp) {
        Name = tmp;
    }
    void Set_Surname(string tmp) {
        Surname = tmp;
    }
    void Set_City(string tmp) {
        City = tmp;
    }
    void Set_Marital_Status(string tmp) {
        Marital_Status = tmp;
    }
    void Set_Kids(string tmp) {
        Kids = tmp;
    }
    string Get_Name() {
        return Name;
    }
    string Get_Surname() {
        return Surname;
    }
    string Get_City() {
        return City;
    }
    string Get_Marital_Status() {
        return Marital_Status;
    }
    string Get_Kids() {
        return Kids;
    }

    ~student();

private:
    string Name, Surname, City, Marital_Status, Kids;
};

student::student() {
}

student ::~student() {
}

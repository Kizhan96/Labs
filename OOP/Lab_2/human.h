#pragma once
#include <string>
using namespace std;

class human {
public:
    human();

    void set_race(string race) {
        Race = race;
    }

    void set_age(string age) {
        Age = age;
    }

    void set_height(string heigth) {
        Height = heigth;
    }

    void set_weight(string weight) {
        Weight = weight;
    }

    string get_race() {
        return Race;
    }

    string get_age() {
        return Age;
    }

    string get_heigth() {
        return Height;
    }

    string get_weight() {
        return Weight;
    }

    ~human();

private:
    string Race, Age, Height, Weight;
};

human::human() {
}

human::~human() {
}

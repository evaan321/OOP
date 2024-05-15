#include <bits/stdc++.h>
using namespace std;

class Engine {
public:
    string EngineName;

    Engine(string en) {
        this->EngineName = en;
    }

        void engineCompany() {
        cout << "Chinese Company" << endl;
    }
};

class Window {
public:
    string bulletproof;

    Window(string bp) {
        this->bulletproof = bp;
    }
};
//Multiple Inheritance
class Car : public Engine, public Window {
public:
    string model;

    Car(string model, string en, string bp) : Engine(en), Window(bp) {
        this->model = model;
    }
};
//single inhertance
class Bike : public Engine {
public:
    string model;

    Bike(string model, string en) : Engine(en) {
        this->model = model;
    }
};

int main() {
    Car myCar("Audi", "Motoryy", "No");
    cout << myCar.EngineName << endl;

    Bike myBike("FZ", "Chinese");
    cout << myBike.model << endl;

    return 0;
}

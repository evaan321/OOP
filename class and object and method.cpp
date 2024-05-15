#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    string name;
    string model;


    Car(string name, string model) {
        this->name = name;
        this->model = model;
        cout << "Welcome to your new Car. You can use startEngine(), stopEngine(), direction(), checkTopSpeed(), carInfo()" << endl;
    }

    void startEngine() {
        cout << "ENGINE STARTED...." << endl;
    }

    void stopEngine() {
        cout << "Engine turned off" << endl;
    }

    int checkTopSpeed() {
        return 240;
    }

    void direction() {
        string destination;
        cout << "Please Enter where you want to go: ";
        cin >> destination;
        cout << "It will take 30 mins to reach " << destination << endl;
    }

    void carInfo() {
        cout << "Name: " << name << " " << model << endl;
    }
};

int main() {
    Car myCar("Bmw", "m3");
    myCar.carInfo();
    int a = myCar.checkTopSpeed();
    cout<<a;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Country {
public:
    string name;

    Country(string n) {
        this->name = n;
    }

    virtual void language() {
        cout << "Language is English" << endl;
    }
};

class Bangladesh : public Country {
public:
    Bangladesh(string n) : Country(n) {
     
    }

    // method overriding
    void language() override {
        cout << "Language is Bangla" << endl;
    }
};

class India : public Country {
public:
    India(string n) : Country(n) {}

    // method overloading
    void language(string a, string b) {
        cout << "Language " << a << " and " << b << endl;
    }
};

int main() {
    India a("India");

    a.language("Hindi", "Bangla");

    return 0;
}

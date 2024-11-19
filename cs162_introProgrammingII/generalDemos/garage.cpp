#include <iostream>
#include <string>

using namespace std;

class Garage {
private:
    int num_cars;
    string *cars;

public:
    Garage();
    Garage(int);

    ~Garage();
    Garage(const Garage&);
    Garage& operator=(const Garage&);

    Garage fun1();
    void fun2(Garage);
    Garage& fun3(Garage&);
    void fun4();
};

Garage::Garage() {
    cout << "Garage()" << endl;
    num_cars = 0;
    cars = NULL;
}

Garage::Garage(int n) {
    cout << "Garage(int)" << endl;
    num_cars = n;
    cars = new string[n];
}

Garage::~Garage() {
    cout << "~Garage()" << endl;
    if (cars != NULL) {
        delete [] cars;
        cars = NULL;
    }
}

Garage::Garage(const Garage& g) {
    cout << "CC" << endl;
    this->num_cars = g.num_cars;
    this->cars = new string[this->num_cars];
    for (int i = 0; i < this->num_cars; ++i)
    {
        this->cars[i] = g.cars[i];
    }

}

Garage& Garage::operator=(const Garage& g) {
    cout << "AOO" << endl;
    if (this == &g) {
        return *this;
    }

    if (this->cars != NULL) {
        delete [] this->cars;
    }

    this->num_cars = g.num_cars;
    this->cars = new string[this->num_cars];
    for (int i = 0; i < this->num_cars; ++i)
    {
        this->cars[i] = g.cars[i];
    }

    return *this;
}

Garage Garage::fun1() {
    cout << "1" << endl;
    Garage temp;
    // stuff
    return temp;
}

void Garage::fun2(Garage g) {
    cout << "2" << endl;
    // stuff
}

Garage& Garage::fun3(Garage& g) {
    cout << "3" << endl;
    // stuff
    return g;
}

void Garage::fun4() {
    cout << "Something" << endl;
}


int main() {
    Garage g1;
    Garage g2(5);
    Garage g3 = g2;
    g1 = g2;

    cout << "\nBEFORE 101\n\n";
    g2.fun1().fun4();
    // g1 = g2.fun1();
    cout << "\nAFTER 101\n";

    // g3.fun2(g1);

    // g1.fun3(g2);

    return 0;
}
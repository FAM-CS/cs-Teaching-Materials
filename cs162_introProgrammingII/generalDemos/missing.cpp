#include <iostream>
#include <string>
using namespace std;

struct Cat {
    string name;
    string breed;
    float weight;
};

int main() {
    Cat garfield;
    garfield.name = "Otto";

    for (int i = 0; i < 3; ++i) {
        if ("Garfield" != garfield.name) {
            cout << "Imposter!\n";
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int counter = 0;

    // How many times does this loop run?
    for (int i = 0; i < 5; ++i) {
        cout << "i: " << i << endl;
        counter++;
    }

    cout << "counter: " << counter << endl;

    return 0;
}
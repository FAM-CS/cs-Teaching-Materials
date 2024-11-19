#include <iostream>
#include <string>
using namespace std;

// Global scope variable
int num_birds = 5;

int main() {
    int four = 4;    // scope of “four” is within main()

    cout << nothing << endl;  // “nothing” is not defined

    cout << "birds: " << num_birds << endl;

    for (int i = 0; i < 5; i ++) {
        // ^ i is a local variable to the for loop
        cout << "four: " << four << endl;
        cout << "i: " << i << endl;
    }

    // Can't access i out of for loop,
    // will generate a compiling error
    cout << i << endl;
}

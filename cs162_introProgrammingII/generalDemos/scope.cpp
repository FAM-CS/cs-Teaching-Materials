#include <iostream>
#include <string>
using namespace std;

int main() {
    string cat = "Meow x ";

    if (cat + "3" == "Meow x 3") {
        cout << "Successful concatenation: " << cat + "3" << endl;
    }
    else {
        cout << "Unexpected result\n";
    }

    return 0;
}

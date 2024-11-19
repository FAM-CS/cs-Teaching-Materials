#include <iostream>
#include <string>

using namespace std;

class CS {
    int num_std;
    string* std_names;
    CS() { cout << "CS()" << endl;}
    CS(int n) { cout << "CS(int)" << endl; }
    S() { cout << "~CS()" << endl; } //other functionalities
};

int main() {
    CS c1;
    CS c2(5);
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

void func(ifstream file) {
    int hi = 0;
    file >> hi;
}

int main() {
    ifstream file("ex.txt");

    func(file);

    return 0;
}

#include <iostream>
using namespace std;

const int ARR_SIZE = 5;

int main() {
    int scores[ARR_SIZE] = {9, 6, 5, 7, 8};   // 35

    int sum = 0;
    for (int i = 0; i < ARR_SIZE; ++i) {
        sum += scores[i];
    }

    cout << "sum: " << sum << endl;

    return 0;
}

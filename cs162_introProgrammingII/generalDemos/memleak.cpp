#include <iostream>
#include <string>
using namespace std;

#define BASKET_SIZE 4

int main() {
    // Using an initialization list to fill dynamic array of strings
    string *fruit_basket = new string[BASKET_SIZE]
        {"orange", "kiwi", "apple", "banana"};

    for (int i = 0; i < BASKET_SIZE; ++i) {
        cout << "[" << i << "]: " << fruit_basket[i] << endl;
    }

    delete [] fruit_basket;
    fruit_basket = NULL;

    cout << "\nDump and use new basket...\n" << endl;
    fruit_basket = new string[BASKET_SIZE+1]
        {"pineapple", "kiwi", "grape", "banana", "mango"};

    for (int i = 0; i < BASKET_SIZE+1; ++i) {
        cout << "[" << i << "]: " << fruit_basket[i] << endl;
    }

    delete [] fruit_basket;
    fruit_basket = NULL;

    return 0;
}
#include <iostream>
using std::cout;
using std::endl;

// You can print emojji's depending on your terminal settings!

int main() {
    // Source: https://emojipedia.org/
    // use the emoji itself or escape it as its unicode number
    cout << "Apple: 🍏 \U0001F34E" << endl;
    cout << "Watermelon: \U0001F349" << endl;

    return 0;
}
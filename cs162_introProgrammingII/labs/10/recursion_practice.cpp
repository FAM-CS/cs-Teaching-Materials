/*********************************************************************
** Program Filename:  recursion_practice.cpp
** Author: First Last
** Date: 05-12-2023
** Description:
** Input:
** Output:
*********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//? Tip: With recursion it helps to consider the smallest "unit" of the problem
//? Can you think of a small task for the function to do (1 step)

void count_down(int num) {
    if (num <= 0) {
        return;
    }

    cout << num << " ";
    count_down(num - 1);
}

// count_down(5) -> count_down(4) -> count_down (3) ...

// count_up(5)
void count_up(int num) {
    if (num <= 0) {
        return;
    }

    count_up(num - 1);
    cout << num << " ";
}

void pattern(int n, int col) {
    if (n <= 0) {
        return;
    }
    pattern(n / 2, col + n / 2);

    // Print row
    for (int i = 0; i < col; i++) {
        printf("  "); }

    for (int i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");

    pattern(n / 2, col + n / 2);
}



int main(int argc, char *argv[]) {
    pattern(4, 1);
    // // TODO: Make a recursive function that counts down from a given number
    // cout << "count_down(5): \t";
    // count_down(5);
    // cout << "\nExpected: \t5 4 3 2 1" << endl;
    // cout << endl;

    // //! Challenge: Can you implement a count up?
    // //
    // cout << "count_up(5): \t";
    // count_up(5);
    // cout << "\nExpected: \t1 2 3 4 5" << endl;
    return 0;
}
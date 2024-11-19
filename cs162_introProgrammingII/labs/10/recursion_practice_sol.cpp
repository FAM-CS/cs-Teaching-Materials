/*********************************************************************
** Program Filename:  recursion_practice.cpp
** Author: Fatima Moussaoui
** Date: 05-12-2023
** Description: Solution for recursion practice on count_down and count_up
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
    // Check if reached base case
    if (num <= 0) {
        // Base case, do not print anything
        return;
    }
    // Print current number
    cout << num << " ";
    // Count down to next number
    count_down(num - 1);
}

void count_up(int num) {
    // Check if reached base case
    if (num <= 0) {
        // Base case, do not print anything
        return;
    }
    // Count up to next number
    count_up(num - 1);
    // Print current number
    cout << num << " ";
}


int main(int argc, char *argv[]) {
    // TODO: Make a recursive function that counts down from a given number
    cout << "count_down(5): \t";
    count_down(5);
    cout << "\nExpected: \t5 4 3 2 1" << endl;
    cout << endl;

    //! Challenge: Can you implement a count up?
    //
    cout << "count_up(5): \t";
    count_up(5);
    cout << "\nExpected: \t1 2 3 4 5" << endl;

    return 0;
}
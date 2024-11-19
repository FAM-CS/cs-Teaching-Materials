/*********************************************************************
** Program Filename:  boilerplate.cpp
** Author: FirstName LastName
** Date: DD-MM-YYYY
** Description: General template for C++ program
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



/*********************************************************************
 ** Function: main
 ** Description:
 ** Parameters:
 **     argc - number of command line arguments passed in (argument count)
 **     argv[] - array for command line arguments passed in (argument vector)
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
*********************************************************************/
int main(int argc, char *argv[]) {
    // int x;

    // if (x < -4) {
    //     cout << "Less than" << endl;
    // }

    // cout << "End of program" << endl;

int arr[5] = {1, 2, 3, 4, 5};
int *arr_ptr = arr;
arr_ptr[0] = 22;

for (int i = 0; i < 5; i++) {
    cout << arr_ptr[i] << endl;
}

    return 0;
}
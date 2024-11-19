/*********************************************************************
 ** Program Filename:  demo.cpp
 ** Author: Fatima Moussaoui
 ** Date: 04/05/2022
 ** Description: Demo for part 2 of lab 2
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>

using namespace std;                    // Don't need to use "std::" for cout, endl


/*********************************************************************
 ** Function: main
 ** Description: Demo Heap vs Memory
 ** Parameters:
 **    argc = number of command line arguments passed in
 **    argv[] = array for command line arguments passed in
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
int main(int argc, char* argv[]){
    /* 1.   Stack and Heap --------------------------------------------------------*/
    // Both hold data
    // Live at opposite ends in memory and grow toward each other
    // int *p = new int;   // data type and how much of that data you want
    // // *p = 162;
    // cout << "Address of p: "<< &p << endl;
    // cout << "p: " << p << "    *p: " << *p << endl;   // No assigned val (*undefined behavior)

    // int *q = new int;
    // *q = 4;
    // cout << "Address of q: " << &q << endl;
    // cout << "q: " << q << "    *q: " << *q << endl;   // Assigned val
    // cout << "\n";

    // delete p;
    // delete q;

    // // int vs. int *
    // int i = 10;                         // best practice: initialize values for variables
    // int *par = &i;
    // cout << "Address of i: " << &i << "    Value of i: " << i << endl;
    // cout << "Address of par: " << &par << "    Value par: " << par << endl;
    // cout << "\n";

    // delete par;                     // Free the memory stored in part, which is on stack (error)

    // int *var = new int;
    // delete var;                         // Free the memory stored in var, which is on heap (OK)

    // // Clean up...
    // delete p;
    // delete q;

    /* 2.	What is dynamic memory? -----------------------------------------------*/
    int *test = NULL;
    int num = 1;
    cout << "Enter an integer: ";
    cin >> num;

    if(num == 1) {
        int  *test = new int[4];
        string *arr_tr = new string[6];
        string* *arr_str_ptr = new string*[8];

        test[0] = 3;

        cout << test[0]                 // Create space for 4 integers
    }
    else {
        cout << "No memory created" << endl;      // Compare with valgrind
    }

    // If test isn’t null then it frees it, otherwise it doesn’t do anything (Important to set to NULL)
    //
    delete [] test;      // Need [] when deleting arrays (valgrind gives a mismatched free error)
    test = NULL;


    /* 3.	What is a memory leak? How to prevent?  -------------------------------*/
    // Answer: Valgrind and delete!
    // To run with valgrind: valgrind <exec>   OR   valgrind --leak-check=full <exec>
    // Make sure to compile with the debugging flag "-g"
    //
    int *problem = new int;

    delete problem;               // How do you get back to the first int put on the heap?

    problem = new int;

    delete problem;               // How do you get back to the first int put on the heap?
    problem = NULL;

    // // Check your valgrind output!

    return 0;
}

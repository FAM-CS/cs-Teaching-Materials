/*********************************************************************
 ** Program Filename:  demo_wizard.cpp
 ** Author: Fatima Moussaoui
 ** Date: 00/00/20--
 ** Description: Lab demo of structs and file separation
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>
#include <stdlib.h>
#include "wizard.h"     // When you include your own file it goes in ""

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
int main(int argc, char* argv[]){
    struct Wizard harry;            // struct keyword is optional in C++
    harry.name = "Harry";

    cout << harry.name <<endl;

    // Create array of structs
    Wizard wizards[3];       // if this is dynamic, you should save the size of the array

    cout << "Size of wizard struct (bytes): " << sizeof(struct Wizard) << endl;
    cout << "Size of wizard array (bytes): " << sizeof(wizards) << endl;
    cout << "Size of wizards: " << sizeof(wizards) / sizeof(wizards[0]) << endl << endl;

    // Populate array
    for (int i = 0; i < 3; ++i) {
        populate_wizard(wizards[i]);
    }

    // Display array of wizards

    cout << "\n--------------------------------" << endl;
    print_wizards(wizards, 3);
    cout << "\n--------------------------------" << endl;


    wizards[0].age += wizards[0].age;
    cout << "Age of wizard[0]: " << wizards[0].age << endl;

    cout << "Struct ptr--------------------------" << endl;
    // Have a pointer to a struct? Use "->" to access its member
    Wizard *harry_ptr = &wizards[0];

    harry_ptr->age = 18;        // SAME AS: (*harry_ptr).age = 18;

    cout << "Age of harry_ptr->age: " << harry_ptr->age << endl;
    cout << "Age of modded wizard[0]: " << wizards[0].age << endl;

    return 0;
}







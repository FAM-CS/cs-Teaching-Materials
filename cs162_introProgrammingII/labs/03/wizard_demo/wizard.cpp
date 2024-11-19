/*********************************************************************
 ** Program Filename: wizard.cpp
 ** Author: Fatima Moussaoui
 ** Date: 00/00/20--
 ** Description: Implementation file for wizard
 ** Input:
 ** Output:
 *********************************************************************/

// This is your implementation file
// Include your function code (definitions) here
#include <iostream>
#include <fstream>
#include <string>

#include "./wizard.h"       // When you include your own file it goes in ""

// alternative to "using namespace std;"
using std::string;          // Don't need to use "std::" for cout, endl
using std::cout;
using std::cin;
using std::endl;

// fill single wizard struct
void populate_wizard(Wizard &wizard) {
    cout << "Name: ";
    cin >> wizard.name;

    cout << "Age: ";
    cin >> wizard.age;

    cout << "Patronus: ";
    cin >> wizard.patronus;

    cout << endl;
}


// print array of wizards given size of array
void print_wizards(Wizard wizards[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << wizards[i].name << " " <<  wizards[i].age << " " <<   wizards[i].patronus << endl;
    }
}

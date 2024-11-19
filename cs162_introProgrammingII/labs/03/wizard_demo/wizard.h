// Header guards are like if statements,
// you should have them to avoid multiple definintion errors
#ifndef WIZARD_H
#define WIZARD_H

// This is your interface / header file
// Include your function prototypes (declarations) here

#include <string>
using namespace std;


struct Wizard {
    string name;
    string patronus;
    int age;
};

void populate_wizard(Wizard &wizard);
void print_wizards(Wizard wizards[], int size);

#endif

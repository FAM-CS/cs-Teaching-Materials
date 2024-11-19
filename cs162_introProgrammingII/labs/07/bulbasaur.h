/*********************************************************************
 ** Program Filename: bulbasaur.h
 ** Author: Fatima Moussaoui
 ** Date: 10/20/2021
 ** Description: Header file for Bulbasaur class, setting values for the pokemon.
 *********************************************************************/
#ifndef BULBASAUR_H
#define BULBASAUR_H

#include "./pokemon.h"

//! Derived classes do not inherit: Constructor, AOO, CC, destructor
//! They are invoked automatically

// Bulbasaur b; // Pokemon() > Bulbasaur; Deletion Bulbasaur then Pokemon

//? What kind of inheritance am I using?     (*public, protected, or private)
class Bulbasaur : public Pokemon {
private:
    std::string moves[4];

public:
    // Constructors for Bulbasaur
    Bulbasaur();
    Bulbasaur(std::string, std::string);

    std::string get_move(int i) override;

    //? Override is a keyword that lets the compiler know:  (optional)
    //?    Hey! This function should have the same function in the parent as a virtual!
    //?    (if you don't have one you may see a "vtable" lookup error)
    //?    (vtable is how the compiler resolves which derived function to use)
    //? info: https://www.geeksforgeeks.org/override-keyword-c/
    //! Do not need to redeclare override in .cpp file
    // void print_pokemon() const;
    void print_pokemon() const override;
};


#endif

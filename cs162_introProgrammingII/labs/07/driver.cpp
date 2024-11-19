/*********************************************************************
 ** Program Filename: driver.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/19/2021
 ** Description: Demo of inheritance
 *********************************************************************/
#include "./pokemon.h"
#include "./bulbasaur.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    //~ Create an instance of a Pokemon
    Pokemon generic;

    //~ Couple ways to call/use parameterized constructor
    // Pokemon generic("Pikachu", "Electric");
    // Pokemon generic = Pokemon("Pikachu", "Electric");

    generic.set_health(14.5).set_attack(14.5).set_defence(14.5);
    generic.print_pokemon();
    std::cout << "\n";

    //~ Create an instance of a Bulbasaur
    Bulbasaur b;
    b.set_attack(100);
    b.print_pokemon();

    //? Upcasting: child to parent   (type casting / conversion)
    std::cout << "\nUpcasting Bulbasaur to Pokemon\n";

    //! Downcasting can get dangerous (parent to child),
    //!    as parent may not have same members as child
    cout << "\n\nPokemon ptr: \n";
    Pokemon* ptr = &b;
    ptr->print_pokemon();
    std::cout << "Move[0]: " << ptr->get_move(0) << std::endl;


    cout << "\n\nPokemon p: \n";
    Pokemon p = b;
    p.print_pokemon();
    std::cout << "Move[0]: " << p.get_move(0) << std::endl;

    return 0;
}

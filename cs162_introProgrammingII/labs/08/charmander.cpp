/*********************************************************************
 ** Program Filename: charmander.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/5/2021
 ** Description: Implementation file of Charmander interface file.
 *********************************************************************/
#include "./charmander.h"

#include <iostream>
#include <string>

Charmander::Charmander() : Pokemon("Charmander", "Fire"){
    moves[0] = "Scratch";
    moves[1] = "Ember";
    moves[2] = "Flamethrower";
    moves[3] = "Rage";

    health_points = 39;
    attack_points = 52;
    defense_points = 43;
    speed = 65;

    std::cout << "\nCharmander CONSTRUCTOR\n";
}

Charmander::~Charmander() {
    std::cout << "\nCharmander DESTRUCTOR\n";
}


/*********************************************************************
 ** Function: get_name
 ** Description: Return name of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: name is returned.
 *********************************************************************/
std::string Charmander::get_name() const{
    return name;
}


/*********************************************************************
 ** Function: print_pokemon
 ** Description:
 **     Print pokemon information and their moveset.
 ** Parameters: 
 **     None
 ** Pre-Conditions: Pokemon object exists
 ** Post-Conditions: name is returned
 *********************************************************************/
void Charmander::print_pokemon() const{
    std::cout << "POKEMON: " << name 
            << "\nTYPE: " << type
            << "\nHP: " << health_points
            << "\nATK: " << attack_points
            << "\nDEF: " << defense_points 
            << "\nSPD: " << speed << std::endl;

    for(int i = 0; i < 4; i++) {
        std::cout << "move[" << i << "]: " << moves[i] << std::endl;
    }
}

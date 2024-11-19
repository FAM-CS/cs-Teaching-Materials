/*********************************************************************
 ** Program Filename: bulbasaur.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/5/2021
 ** Description: Implementation file of Bulbasaur interface file.
 *********************************************************************/
#include "./pokemon.h"
#include "./bulbasaur.h"

#include <iostream>
#include <string>


/*********************************************************************
 ** Constructor: Bulbasaur
 ** Description:
 **     Initialize members of Bulbasaur
 ** Parameters:
 **     None
 *********************************************************************/
Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", "Grass"){
    moves[0] = "Vine_Whip";
    moves[1] = "Razor_Leaf";
    moves[2] = "Solarbeam";
    moves[3] = "Poison_Powder";

    health_points = 45;
    attack_points = 49;
    defense_points = 49;
    speed = 45;
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
void Bulbasaur::print_pokemon() const{
    std::cout << "\nBULBASAUR printing\n";
    Pokemon::print_pokemon();        //~ This is how you can call a parent member function

    // std::cout << "POKEMON: " << name
    //         << "\nTYPE: " << type
    //         << "\nHP: " << health_points
    //         << "\nATK: " << attack_points
    //         << "\nDEF: " << defense_points
    //         << "\nSPD: " << speed << std::endl;

    for(int i = 0; i < 4; i++) {
        std::cout << "move[" << i << "]: " << moves[i] << std::endl;
    }
}


std::string Bulbasaur::get_move(int i){
    return moves[i];
}

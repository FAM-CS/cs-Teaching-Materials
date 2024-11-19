/*********************************************************************
 ** Program Filename: pokemon.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/5/2021
 ** Description: Implementation file of Pokemon interface file.
 *********************************************************************/
#include "./pokemon.h"

#include <iostream>
#include <string>
#include <sstream>


/*********************************************************************
 ** Constructor: Pokemon
 ** Description: Initialize members of Pokemon
 ** Parameters: None
 *********************************************************************/
//! Use an initializer list to initialize const members
Pokemon::Pokemon() : name("Pokemon"), type("Normal") {
    health_points = 0;
    attack_points = 0;
    defense_points = 0;
    speed = 0;
}

//~ Parametrized constructor
/*********************************************************************
 ** Constructor: Pokemon
 ** Description: Initialize members of Pokemon
 ** Parameters: name, type
 *********************************************************************/
//! Use an initializer list to initialize const members
Pokemon::Pokemon(std::string n, std::string t) : name(n), type(t){
    health_points = 0;
    attack_points = 0;
    defense_points = 0;
    speed = 0;
}



/*
 * Defining getters/accesors.
 */


/*********************************************************************
 ** Function: get_name
 ** Description: Return name of Pokemon
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists
 ** Post-Conditions: name is returned
 *********************************************************************/
std::string Pokemon::get_name(){
    return name;
}

/*********************************************************************
 ** Function: get_type
 ** Description: Return type of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: type is returned.
 *********************************************************************/
std::string Pokemon::get_type(){
    return type;
}


/*********************************************************************
 ** Function: get_health
 ** Description: Return HP of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: health_points is returned.
 *********************************************************************/
float Pokemon::get_health(){
    return health_points;
}


/*********************************************************************
 ** Function: get_attack
 ** Description: Return ATK of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: attack_points is returned.
 *********************************************************************/
float Pokemon::get_attack(){
    return attack_points;
}


/*********************************************************************
 ** Function: get_defense
 ** Description: Return DEF of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: defense_points is returned.
 *********************************************************************/
float Pokemon::get_defense(){
    return defense_points;
}


/*********************************************************************
 ** Function: get_speed
 ** Description: Return SPD of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: type is returned.
 *********************************************************************/
float Pokemon::get_speed(){
    return speed;
}


/*********************************************************************
 ** Function: get_move
 ** Description: Return move of a Pokemon
 ** Parameters: i (int) - index of move
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: a string (move is returned)
 *********************************************************************/
std::string Pokemon::get_move(int i) {
    return "N/A";
}

/*
 * Defining setters/mutators.
 */

/*********************************************************************
 ** Function: set_health_points
 ** Description: Set HP to a given number and pass Pokemon.
 ** Parameters: health_points (float) - HP of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_health(float health_points){
    this->health_points = health_points;
    return *this;
}


/*********************************************************************
 ** Function: set_attack_points
 ** Description: Set ATK to a given number and pass Pokemon.
 ** Parameters: attack_points (float) - ATK of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_attack(float attack_points){
    this->attack_points = attack_points;
    return *this;
}


/*********************************************************************
 ** Function: set_defense_points
 ** Description: Set DEF to a given number and pass Pokemon.
 ** Parameters: defense_points (float) - DEF of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_defence(float defense_points){
    this->defense_points = defense_points;
    return *this;
}


/*********************************************************************
 ** Function: print_pokemon
 ** Description: Print Pokemon information to the terminal.
 ** Parameters: None.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon information is printed to the terminal.
 *********************************************************************/
void Pokemon::print_pokemon() const {
    std::cout << "\nPOKEMON printing\n";

    std::cout << "POKEMON: " << name
              << "\nTYPE: " << type
              << "\nHP: " << health_points
              << "\nATK: " << attack_points
              << "\nDEF: " << defense_points
              << "\nSPD: " << speed << std::endl;
}

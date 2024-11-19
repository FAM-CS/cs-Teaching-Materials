/*********************************************************************
 ** Program Filename: pokemon.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/5/2021
 ** Description: Implementation file of Pokemon interface file.
 *********************************************************************/
#include "./pokemon.h"

#include <iostream>
#include <string>


/*********************************************************************
 ** Constructor: Pokemon
 ** Description:
 **     Initialize members of Pokemon
 ** Parameters: 
 **     None
 *********************************************************************/
Pokemon::Pokemon(std::string name, std::string type) : name(name), type(type){
    health_points = 0;
    attack_points = 0;
    defense_points = 0;
    speed = 0;

    std::cout << "\nPokemon CONSTRUCTOR\n";
}

Pokemon::~Pokemon() {
    std::cout << "\nPokemon DESTRUCTOR\n";
}


/*
 * Defining getters/accesors.
 */



std::string Pokemon::get_name() const{
    return name;
}

/*********************************************************************
 ** Function: get_type
 ** Description: Return type of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: type is returned.
 *********************************************************************/
std::string Pokemon::get_type() const{
    return type;
}


/*********************************************************************
 ** Function: get_health
 ** Description: Return HP of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: health_points is returned.
 *********************************************************************/
float Pokemon::get_health() const{
    return health_points;
}


/*********************************************************************
 ** Function: get_attack
 ** Description: Return ATK of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: attack_points is returned.
 *********************************************************************/
float Pokemon::get_attack() const{
    return attack_points;
}


/*********************************************************************
 ** Function: get_defense
 ** Description: Return DEF of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: defense_points is returned.
 *********************************************************************/
float Pokemon::get_defense() const{
    return defense_points;
}


/*********************************************************************
 ** Function: get_speed
 ** Description: Return SPD of Pokemon.
 ** Parameters: None
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: type is returned.
 *********************************************************************/
float Pokemon::get_speed() const{
    return speed;
}


/*
 * Defining setters/mutators.
 */

/*********************************************************************
 ** Function: set_health
 ** Description: Set HP to a given number and pass Pokemon.
 ** Parameters: health_points (float) - HP of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_health(const float hp){
    // hp = 10; // can't do this
    this->health_points = hp;
    return *this;
}


/*********************************************************************
 ** Function: set_attack
 ** Description: Set ATK to a given number and pass Pokemon.
 ** Parameters: attack_points (float) - ATK of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_attack(const float attack_points){
    this->attack_points = attack_points;
    return *this;
}


/*********************************************************************
 ** Function: set_defense
 ** Description: Set DEF to a given number and pass Pokemon.
 ** Parameters: defense_points (float) - DEF of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_defence(const float defense_points){
    this->defense_points = defense_points;
    return *this;
}


/*********************************************************************
 ** Function: set_speed
 ** Description: Set SPD to a given number and pass Pokemon.
 ** Parameters: speed (float) - SPD of Pokemon.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon object is returned.
 *********************************************************************/
Pokemon& Pokemon::set_speed(const float speed){
    this->speed = speed;
    return *this;
}


/*********************************************************************
 ** Function: print_pokemon
 ** Description: Print Pokemon information to the terminal.
 ** Parameters: None.
 ** Pre-Conditions: Pokemon object exists.
 ** Post-Conditions: Pokemon information is printed to the terminal.
 *********************************************************************/
void Pokemon::print_pokemon() const{
    std::cout << "POKEMON: " << name 
            << "\nTYPE: " << type
            << "\nHP: " << health_points
            << "\nATK: " << attack_points
            << "\nDEF: " << defense_points 
            << "\nSPD: " << speed 
            << std::endl;
}

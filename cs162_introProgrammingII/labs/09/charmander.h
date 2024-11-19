/*********************************************************************
 ** Program Filename: charmander.h
 ** Author: Fatima Moussaoui
 ** Date: 10/20/2021
 ** Description: Header file for Charmander class, setting values for the pokemon.
 *********************************************************************/
#ifndef CHARMANDER_H
#define CHARMANDER_H

#include "./pokemon.h"

class Charmander : public Pokemon {
private:
    std::string moves[4];

public:
    Charmander();     // Constructor for Charmander
    ~Charmander();
    

    std::string get_name() const override;

    void print_pokemon() const;
};


#endif

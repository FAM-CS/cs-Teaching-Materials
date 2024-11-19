/*********************************************************************
 ** Program Filename: bulbasaur.h
 ** Author: Fatima Moussaoui
 ** Date: 10/20/2021
 ** Description: Header file for Bulbasaur class, setting values for the pokemon.
 *********************************************************************/
#ifndef BULBASAUR_H
#define BULBASAUR_H

#include "./pokemon.h"

class Bulbasaur : public Pokemon {
private:
    std::string moves[4];

public:
    Bulbasaur();     // Constructor for Bulbasaur

    ~Bulbasaur();

    

    std::string get_name() const override;
    // final

    void print_pokemon() const;
};


#endif

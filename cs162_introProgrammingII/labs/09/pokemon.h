#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
protected:
    const std::string name;
    const std::string type;

    float health_points;
    float attack_points;
    float defense_points;
    float speed;

    Pokemon(std::string, std::string);
public:
    // Pokemon mypokekn;       //! Note allowed
    // Pokemon* allowd;
    // Pokemon& allowed2;

    virtual ~Pokemon() = 0;

    /* Declaring getters */
    virtual std::string get_name() const = 0;   // pure virtual function

    // override and final -> keywords  -std=c++11

    std::string get_type() const;
    float get_health() const;
    float get_attack() const;
    float get_defense() const;
    float get_speed() const;

    /* Declaring setters */

    Pokemon& set_health(const float);
    Pokemon& set_attack(const float);
    Pokemon& set_defence(const float);
    Pokemon& set_speed(const float);


    /* Extra helpful functions */
    virtual void print_pokemon() const;

};

#endif

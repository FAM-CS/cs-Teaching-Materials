#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
protected:
    const std::string name;     // const, must use member initialization lists
    const std::string type;     // const, must use member initialization lists

    float health_points;
    float attack_points;
    float defense_points;
    float speed;

public:
    Pokemon();
    Pokemon(std::string, std::string);

    /* Declaring getters */
    std::string get_name();
    std::string get_type();

    float get_health();
    float get_max_health();
    float get_attack();
    float get_defense();
    float get_speed();

    /* Declaring setters */

    Pokemon& set_health(float);     // using chain setters (return a reference to the object)
    Pokemon& set_attack(float);     // using chain setters (return a reference to the object)
    Pokemon& set_defence(float);    // using chain setters (return a reference to the object)
    // NOTE: Chain setters let you do: poke.set_health(90).set_attack(40);

    /* Extra helper functions */
    //? Virtual keyword:   used for runtime polymorphism (resolve call at runtime)
    //?   Making a parent function virtual allows for the child's function to override
    //?   that function when the child is being referred to as a parent pointer/reference
    //! Do not need to redeclare virtual in .cpp file
    //? info: https://www.geeksforgeeks.org/virtual-function-cpp/

    virtual std::string get_move(int);

    //? Experiment with how pokemon info gets printed when we use upcasting!
    //  Comment out the virtual function.
    //
    void print_pokemon() const;
    // virtual void print_pokemon() const;
};

#endif

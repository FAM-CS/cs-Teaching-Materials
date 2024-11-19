/*********************************************************************
 ** Program Filename:
 ** Author: Fatima Moussaoui
 ** Date: 10/19/2021
 ** Description:
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>      // std::out_of_range

#include "./pokemon.h"
#include "./bulbasaur.h"
#include "./charmander.h"

// FOR LAB: Create some print function that accepts Parent pointer (not a class method).
void printMon(Pokemon* mon) {
    // mon->print_pokemon();

    std::cout << "--------------------------------\n";
    std::cout << "Name: " << mon->get_name() << std::endl;
    std::cout << "Type: " << mon->get_type() << std::endl;
    std::cout << "SPD: " << mon->get_speed() << std::endl;
}

// template <class T>
// void print_anything(T any) {
//     std::cout << "Anything: " << any <<  std::endl;
// }

using std::endl;
using std::cout;

void print_anything(int number = 24) {
    cout << "Int\n";
    cout << "Any: " << number << endl;
}
// print_antyhing()

// void print_anything(std::string number) {
//     cout << "String\n";
//     cout << "Any: " << number << endl;
// }

int main() {
    // int mine = 22;
    // // print_anything<int>(mine);
    // print_anything();

    // std::string m = "Hi";
    // // print_anything<std::string>("Hello!");
    // // print_anything(m);


    // // // Charmander c;
    // Bulbasaur b;

    // Pokemon* any_pokemon = &b;

    // any_pokemon->set_health(14.5).set_attack(14.5).set_defence(100);

    // // Printing bulbasaur
    // std::cout << "\nPrinting bulbasaur--------------------------------------\n";
    // b.print_pokemon();

    // std::cout << "\n";

    // // Will this print the moveset?
    // std::cout << "Printing pokemon (parent) pointer to bulbasaur----------\n";
    // any_pokemon->print_pokemon();


    // ----------------------------------------------------------------------------------
    // Storing different objects in the same vector! (is-a relationship)
    //
    // Make your vector store different Pokemon using Polymorphism!

    // std::cout << "\n\n";

    std::vector<Pokemon*> pokedex;
    std::cout << "Size of pokedex: " << pokedex.size() << std::endl;

    pokedex.push_back(new Bulbasaur);
    pokedex.push_back(new Charmander);
    pokedex.push_back(new Charmander);
    std::cout << "Size of pokedex after: " << pokedex.size() << std::endl;


    // pokedex.at(3)->set_speed(9001);
    // 0 to 2
    // pokedex[3]->set_speed(9001);          // Seg-fault

    try {
        pokedex.at(3)->set_health(9001);     // Seg-fault!
        // throw std::out_of_range("out of my vector bounds");
    }
    catch (const std::out_of_range& error) {
        std::cerr << "Out of Range error: " << error.what() << '\n';
    }
    // catch (...) {
    //     // avoid if possible
    // }

    std::cout << "\n\nPrinting vector: \n\n";
    for (int i = 0; i < pokedex.size(); i++){
        printMon(pokedex[i]);
        // printMon(pokedex.at(i));
    }

    for (int i = 0; i < pokedex.size(); i++){
        delete pokedex.at(i);
    }

    cout << "size: " << fruit_vec.size() << endl;
    cout << "capacity: " << fruit_vec.capacity() << endl;

    return 0;
}



// NOTES:
// - difference between [] and .at() for vector<>
// - override keyword (c++11 standard) -> helps prevent programmer from forgetting to override
//      an existing function in parent
// - exceptions:
//      https://cplusplus.com/reference/stdexcept/out_of_range/

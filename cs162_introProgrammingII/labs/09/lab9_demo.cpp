/*********************************************************************
 ** Program Filename: lab9_demo.cpp
 ** Author: Fatima Moussaoui
 ** Date: 10/27/2023
 ** Description: Lab 9 Demo on templates (vs. overloading), vectors, and a bit of exceptions
 ** Source: This demo adapts material from TheCherno and LearnCPP
 *********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>      // For std::out_of_range
//
#include "./pokemon.h"
#include "./bulbasaur.h"
#include "./charmander.h"


//! For lab 9 do "using namespace std;"
using std::endl;
using std::cout;

//~ Templates VS. Function Overloading


//? Function overloading: two or more functions having the same name but different parameters
// - convenient to do similar functionality based on different inputs
// - code duplication (can be bad, violates DRY principle)

void print_anything(int number = 24) {
    //                         ^ Default value if not provided an argument is 24
    cout << "print_anything(int)\n";
    cout << "Any: " << number << endl;
}

void print_anything(std::string str) {
    cout << "print_anything(std::string)\n";
    cout << "Any: " << str << endl;
}


//? Templates:
// - generate lots of code by writing once
// - if templating types this can "future proof" the implementation for new types
// - can get complex in usage
//! Templates must also be defined in a single source file or entirely in the header file (for linking)

//? Templates with functions:
//
//? typename T is a type template parameter that we declare below
//? - scope is limited to function/class that follows
template <typename T>
void print_anything(T any) {
    std::cout << "Anything: " << any <<  std::endl;
}

//? Templates with classes:
template <typename T, int N>
class Array {
private:
    T arr[N];
public:
    int size() const {
        return N;
    }
};
//? You can swap typename with class above

//! Note: Templates don't "exist" (rendered/compiled) until it gets used in code
//! - Depending on the compiler, errors may not be caught until much later


//? Demo lab 9
int main() {
    int x = 3;
    std::string s = << x == 3 ? "x is 3" : "x is not 3" << std::endl;


    //~ ----------------------------------------------------------------------------------
    //~ ----------------------------------------------------------------------------------
    //~ Templates versus Function Overloading
    //~ ----------------------------------------------------------------------------------
    //~ ----------------------------------------------------------------------------------
    int num = 22;
    // print_anything();    // with function overlaoding
    // print_anything(num);    // with function overlaoding
    print_anything<int>(num);   // template

    std::string greeting = "Hi";
    // print_anything(greeting);   // with function overloading
    print_anything<std::string>(greeting);  // template

    //~ Array
    std::cout << "\nExample of a template class Array..." << std::endl;
    Array<float, 5> arr;
    std::cout << "arr.size(): " << arr.size() << std::endl;

    //~ ----------------------------------------------------------------------------------
    //~ ----------------------------------------------------------------------------------
    //~ Vector review
    //~ ----------------------------------------------------------------------------------
    //~ ----------------------------------------------------------------------------------
    //? Storing different objects in the same vector! (is-a relationship)
    std::cout << "\n\n- - Vector Review - -\n\n\n";

    std::vector<Pokemon*> pokedex;
    std::cout << "Size of pokedex: " << pokedex.size() << std::endl;
    std::cout << "Capacity of pokedex: " << pokedex.capacity() << std::endl;

    std::cout << "\nPushing 3 new pokemon..." << std::endl << std::endl;
    pokedex.push_back(new Bulbasaur);
    pokedex.push_back(new Charmander);
    pokedex.push_back(new Charmander);
    std::cout << "Size of pokedex after: " << pokedex.size() << std::endl;
    std::cout << "Capacity of pokedex after: " << pokedex.capacity() << std::endl;

    std::cout << "\nAccessing a bad index (3)..." << std::endl;
    // pokedex.at(3)->set_speed(9001);          // Throws an exception
    // pokedex[3]->set_speed(9001);          // Segfault/core dump

    //? Takeaway: use .at() to prevent undefined behavior


    //? Use try catch blocks to handle exceptions
    //? - Exception is thrown then it falls until it is "caught" (if not the program ends abruptly)
    try {
        // pokedex.at(3)->set_health(9001);

        // You can raise / throw errors with throw keyword and then a value (e.g., int, exception, class)
        // throw std::out_of_range("out of my vector bounds");
        throw 99;
    }
    //? Specify the error to catch
    catch (const std::out_of_range& error) {
        std::cerr << "Out of Range error: " << error.what() << std::endl;
    }
    catch (int e) {
        std::cerr << "int caught" << std::endl;
    }
    //! Avoid have a catch all (will catch all other exceptions)
    catch (...) {
        std::cerr << "Caught an unexpected error!" << std::endl;
    }


    //~ Clean up all dynamic memory!
    std::cout << "\nCleaning up... 🧹🧹" << std::endl;
    for (int i = 0; i < pokedex.size(); i++){
        delete pokedex.at(i);
    }

    return 0;
}

// NOTES:
// - difference between [] and .at() for vector<>: exceptions!
// - override keyword (c++11 standard) -> helps prevent programmer from forgetting to override
//      an existing function in parent (that should be virtual)
// - templates:
//      https://www.youtube.com/watch?v=I-hZkUa9mIs
//      https://www.learncpp.com/cpp-tutorial/function-templates/
//      https://www.learncpp.com/cpp-tutorial/template-classes/
//      typename T vs class T: https://mariusbancila.ro/blog/2021/03/15/typename-or-class/
// - exceptions (you can also define your own exceptions):
//      https://cplusplus.com/reference/stdexcept/out_of_range/

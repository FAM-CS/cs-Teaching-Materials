/*********************************************************************
 ** Program Filename:  shopcart.cpp
 ** Author: Fatima Moussaoui
 ** Date: 05/02/2022
 ** Description: Implementation file of ShopCart Class
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>
#include <stdio.h>
#include <assert.h>
#include "./shopcart.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;


ShopCart::ShopCart() {
    cout << "\nDefault constructor called" << endl;

    name = "GeneralStore";
    total_cost = 14.50;
    num_items = 5;

    basket = new string[num_items];

    basket[0] = "apple";
    basket[1] = "bread";
    basket[2] = "chips";
    basket[3] = "milk";
    basket[4] = "eggs";
}


ShopCart::~ShopCart() {
    cout << "\nDestructor called" << endl;

    delete [] basket;
    basket = nullptr;
}


void ShopCart::set_item(const int index, const string item) {
    assert(index >= 0 && index < num_items);    // avoid bad indexing

    this->basket[index] = item;
}


// Chaining setters by returning *this
ShopCart& ShopCart::set_name(const string name) {
    this->name = name;

    return *this;
}

ShopCart& ShopCart::set_cost(const float cost) {
    this->total_cost = cost;

    return *this;
}


void ShopCart::print_cart() {
    cout << name << " cart:  $" << total_cost << endl;

    for (int i = 0; i < num_items; i++) {
        cout << basket[i] << "  ";
    }
    cout << endl;
}


//----------------------------------------------------------------------------------------
// REST OF THE BIG THREE
//----------------------------------------------------------------------------------------

// NOTE: Did not copy shop cart name to keep them more distinct

ShopCart::ShopCart(const ShopCart& other_cart) {
    cout << "\nCopy constructor called" << endl;

    this->total_cost = other_cart.total_cost;

    this->num_items = other_cart.num_items;

    // Copy basket to our new basket
    this->basket = new string[this->num_items];
    for (int i = 0; i < other_cart.num_items; i++) {
        this->basket[i] = other_cart.basket[i];
    }
}


const ShopCart& ShopCart::operator=(const ShopCart& other_cart) {
    // Current cart (this) already may have some values and memory associated with it
    cout << "\nAssignment Operator Overload called" << endl;

    // Check if cart being copied is the same as the other
    if (this != &other_cart) {
        return *this;
    }

    //~ Delete old memory if it exists
    if (this->basket != NULL) {
        delete[] this->basket;
    }

    this->total_cost = other_cart.total_cost;
    this->num_items = other_cart.num_items;

    this->basket = new string[this->num_items];
    for (int i = 0; i < other_cart.num_items; i++) {
        this->basket[i] = other_cart.basket[i];
    }

    return *this;
}

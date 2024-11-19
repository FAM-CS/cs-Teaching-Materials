/*********************************************************************
 ** Program Filename:  shopcart.h
 ** Author: Fatima Moussaoui
 ** Date: 04/25/2022
 ** Description: Interface / Header file for ShopCart Class
 ** Input:
 ** Output:
 *********************************************************************/
#ifndef SHOPCART_H
#define SHOPCART_H

#include <string>

using std::string;

class ShopCart {
private:
    string name;
    float total_cost;
    int num_items;
    string *basket;

public:
    ShopCart();
    ShopCart(const ShopCart&);                        // init a cart that is a copy of

    // Big three
    ~ShopCart();
    const ShopCart& operator=(const ShopCart &);      // copy to an existing cart


    // Other functions
    void set_item(const int, const string);
    ShopCart& set_name(const string);
    ShopCart& set_cost(float cost);

    void print_cart();

};

// int bad()

#endif

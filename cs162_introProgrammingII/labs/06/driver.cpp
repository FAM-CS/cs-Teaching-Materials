/*********************************************************************
 ** Program Filename:  driver.cpp
 ** Author: Fatima Moussaoui
 ** Date: 04/25/2022
 ** Description: Demonstrate need for copy constructor and assignment operator overload
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>
#include "./shopcart.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
 ** Function: main
 ** Description:
 ** Parameters:
 **     argc - number of command line arguments passed in (argument count)
 **     argv[] - array for command line arguments passed in (argument vector)
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
int main(int argc, char *argv[]){
    /* Create a shopping cart for fredmeyer */
    ShopCart fredmeyer;
    fredmeyer.set_name("Fredmeyer");
    fredmeyer.print_cart();


    /* Copying carts to other stores */
    // NOTE: COMMENTED OUT BIG 3 -> double free due to shallow copies

    ShopCart winco = fredmeyer;                    // Which big 3?  --> CC

    winco.set_name("Winco").set_cost(25.99);        // Chain setters
    winco.print_cart();

    // What happens if I modify Winco's basket?
    cout << "\nChanging basket for Winco to be healthier..." << endl;
    winco.set_item(2, "spinach");

    winco.print_cart();
    fredmeyer.print_cart();


    cout << "\nCopying Winco cart to Fredmeyer..." << endl;

    fredmeyer = winco;                             // Which big 3?  --> AOO
    fredmeyer.print_cart();


    return 0;
}

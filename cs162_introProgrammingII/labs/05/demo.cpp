/*********************************************************************
 ** Program Filename:  demo.cpp
 ** Author: Fatima Moussaoui
 ** Date: 04/25/2022
 ** Description:
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>

#include "./book.h"

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
    Book def_book;
    // Book cs_book("How to Make a C++ Class", "Bobbie", 101, 3.0);
    Book cs_book;
    cs_book.set_title("Other");

    // def_book.title = "Cat";

    cout << cs_book.set_title("Magic").get_title() << endl << endl;

    def_book.print();

    def_book.set_title("How to");

    def_book.print();

    return 0;
}

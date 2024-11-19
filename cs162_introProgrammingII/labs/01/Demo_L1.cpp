/*********************************************************************
 ** Program Filename:
 ** Author: Fatima Moussaoui
 ** Date: 10/32/2023
 ** Description: Lab 1 demo
 *********************************************************************/
//~ To compile: g++ -g Demo_L1.cpp -o demo
//~ To run: ./demo OR demo
//? g++ is the compiler command for C++ (gcc for C)
//? -g is a debugging flag (will be useful later for debugging)
//? -o specifies an optional output name (Default is a.out)

//~ Libraries we might need...
#include <iostream>
#include <stdlib.h>     // Used for atoi() function
#include <string>

using namespace std;     //? skip adding 'std::'


//~ Pass by Value
// void add_3(int num) {
//     num += 3;                      // same as "num = num + 3;"

//     std::cout << "In function: " << num << std::endl;
// }

//~ Pass by Pointer
// void add_3(int *num) {
//     *num += 3;                      // same as "num = num + 3;"

//     std::cout << "In function: " << *num << std::endl;
// }

//~ Pass By Reference
void add_3(int &num) {
    num += 4;                      // same as "num = num + 3;"

    std::cout << "In function: " << num << std::endl;
}


//~ Main entry point of our program (where the program starts)
int main(int argc, char* argv[]){
    std::cout << "Hello class!\n";

    int num = 0;

    std::cout << "Initial value: " << num << std::endl;

    add_3(num);

    std::cout << "After add_3(): " << num << std::endl;



    //~ Pointer Extras ---------------------------------------------
    int bad = 10;
    int* bad_ptr = NULL;
    *bad_ptr = 3;

    // std::cout << bad << std::endl;

    return 0;
}

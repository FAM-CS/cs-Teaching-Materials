/*********************************************************************
 ** Program Filename:  demo.cpp
 ** Author: Fatima Moussaoui
 ** Date:
 ** Description:
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>

// SAME AS "using namespace std;"
using std::string;
using std::cout;
using std::cin;
using std::endl;

//~ Pass by Value
// Send a copy of the value
void add_3_passbyvalue(int num) {
    num += 3;             // same as "num = num + 3;"

    std::cout << "In function: " << num << std::endl;
}

//~ Pass by Reference
// Send a reference of the value/object
void add_3_passbyreference(int &num) {
    num += 3;             // same as "num = num + 3;"

    std::cout << "In function: " << num << std::endl;
}

//~ Pass by Pointer
// Send a pointer of the value/object
void add_3_passbypointer(int* num) {
    //! Must dereference first to get value!
    *num += 3;

    std::cout << "In function: " << *num << std::endl;

    num = NULL;
}


int main(int argc, char* argv[]){
    // POINTERS REVIEW ---------------------------------------------
    // int bob_age = 10;

    // int* age_ptr = NULL;
    // cout << *age_ptr << endl;                // Segfaults, can't dereference a NULL address


    // PASS BY RECAP -----------------------------------------------
    int number = 3;

    std::cout << "Initial value: " << number << std::endl;
    add_3_passbyvalue(number);
    cout << "After call: " << number << std::endl;

    number = 0;

    cout << "Initial value: " << number << endl;
    add_3_passbyreference(number);
    cout << "After call: " << number << endl;

    number = 0;

    int* num_ptr = &number;
    cout << "num_ptr: " << num_ptr << endl;
    cout << "number: " << number << endl;
    add_3_passbypointer(num_ptr);
    cout << "After num_pter: " << num_ptr << endl;
    cout << "After number: " << number << endl;

    return 0;
}

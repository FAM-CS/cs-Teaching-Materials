/*********************************************************************
 ** Program Filename:  cpp_tutorial.cpp
 ** Author: EECS TAs
 ** Date: Spring 2022
 ** Description: Brief C++ tutorial geared towards students with a background in Python
 *********************************************************************/
#include <iostream>      // Must be included to print
#include <string>        // Allows us to use strings (instead of char*, aka C-style strings)

using namespace std;     // Makes printing easier!


/* ===General Compiling Info on C++=================================================== */
//
/* C++ is a compiled language which means we need to compile it before we can run it, unlike
 * Python which is an interpreted language.
 *
 * To compile this file: g++ -std=c++11 -g cpp_tutorial.cpp -o tutorial
 * To run: ./tutorial
 *
 * I recommend compiling with  the "-g" debugging flag as that provides more helpful error info.
 *
 * Compiling follows this general format:
 *     g++ -std=c++11 -g filename.cpp -o object_filename
 * To run your program:
 *     ./object_filename
 *
 * NOTE: If you omit "-o executable_filename" the default name of the executable file produced
 *       by the compiler is "a.out"
 *       (implicit file extension type is ".exe")
 */


/*===Things to remember about C++=========================================================

    * Indentation does not matter (though it is still good practice to properly indent),
      instead, you'll need a semicolon (;) at the end of each instruction.

    * Single line comments in C++ are done with //, multiline comments are done with /* */
/*
    * In C++, any code you want to run must be enclosed in a "main" function. You can (and should)
      create your functions, objects, structs, etc outside of your main, but any executable code
      needs to be included inside. Main functions are generally integer functions that return 0
      at the end.

    * C++ uses a compiler to run. This means that all of your errors in your code will be caught as the
      program tries to compile - unlike python, an interpreted language, which catches one error at a time as
      the interpreter works.

*/


/*===FUNCTIONS==========================================================================*/
    /* NOTE: You can have multiple arguments for a function by using commas to separate.

      In C++, you must include the argument types and return type of the function.
      If the function returns nothing, you can use  "void" to indicate that.

      In C++:
      _return_type_ function_name(_parameter_type_ parameter_name){
          // function definition
      }
    */

    /*In Python:
    # Unlike in C++, functions in Python do not need to specify types.

    def is_leap_year(year):
        # function definition

    def function_name(var_name):
        # function definition

    # We CAN still use types by using type hinting to clarify function parameters and return types
    # Note: this was first introduced in Python 3.5
    #
    def is_leap_year(year: int) -> bool:
        # function definition

    def function_name(var_name: _parameter_type_) -> _return_type_:
        # function definition
    */

/*********************************************************************
 ** Function: is_leap_year
 ** Description:
 **     Determine whether a given year is a leap year, if the year is a leap
 **     year true otherwise return false.
 ** Parameters:
 **     year - Year to determine whether it is a leap year or not
 ** Pre-Conditions: Must get a year number (integer)
 ** Post-Conditions: Returns a truth value (boolean)
 *********************************************************************/
bool is_leap_year(int year) {
    /*
        A year is a leap year if it is divisible by 400 or divisible by 4 and
        not divisble by 100.

        HINT: use % (modulus operator)
    */

    // Insert function definition here

    return false;
}




/*********************************************************************
 ** Function: main
 ** Description: This demonstrates basic C++ actions
 ** Parameters:
 **     argc - number of command line arguments passed in (argument count)
 **     argv[] - array for command line arguments passed in (argument vector)
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
int main(int argc, char* argv[]){
//
/*===PRINTING===========================================================================*/

    /*In Python:

    print("Hello, world")

    */
    cout << "Hello, World!" << endl;    // "endl" is like using "\n" for new line character, which can still be use in strings

    /* If you don't have "using namespace std;" you have to put "std" and the scope resolution operator "::" infront
     * to use things like cout, cin, and endl.
     */
    std::cout << "Not using namespace std." << std::endl;
    std::cout << "This is a string using backslash n for a new line.\n";


/*===DECLARING VARIABLES================================================================*/

    /* In Python (a weakly, dynamically typed language), you do not need to declare the type of
     * a variable before using it, and its type can change. In C++, you must declare a variable's
     * type when creating it, and its type cannot change.
     */

    /*In Python:

    x = 10, word = "hello"

    */
    int x = 10;
    string word = "hello";


/*===USER INPUT=========================================================================*/

    /* There are two ways to handle user input that you'll deal with in this class. This
     * first method is likely the one you're more familiar with - taking input as the program runs
     */

    /*In Python:

    number_value = input("Enter a number value: ")

    */

    int number = 0;
    cout << "Please enter a number value: "; // I don't include "endl" here, as this will allow the user to input right after the ":"
    cin >> number;


/*===CONDITIONAL STATEMENTS=============================================================*/

    /* Python uses "if, elif, and else" for it's conditional statements. In C++, we use "if, else if, and else".
     * In C++, indentation does not matter (though it's best practice to use it for legibility). Instead, C++
     * encloses all of the executed code after the parenthesis containing the condition in curly braces "{}"
     */

    /*In Python:

    if 4 > 5:
        print("Something is wrong with math")
    elif 4 == 5:
        print("Something is still wrong")
    else:
        print("That looks better")

    */

    if(4 > 5){
        cout << "Something is wrong with math" << endl;
    }
    else if(4 == 5){
        cout << "Something is still wrong" << endl;
    }
    else{
        cout << "That looks better" << endl;
    }

    /* In Python, to compare multiple conditions, you can use logical operators ("and").
     * The following Python keywords are represented using the following symbols in C++:
     *
     * Python: and     C++: &&
     * Python: or      C++: ||
     * Python: not     C++: !
     *
     */

    if(4 > 5 || 5 == 5){
        cout << "This should print" <<endl;
    }
    else{
        cout << "This should not print" <<endl;
    }


/*===WHILE LOOPS========================================================================*/

    /* While loops in C++ function similarly to those in Python. The main difference
     * here is the indentation vs. curly braces, and the different logical operators
     * we explored above, as well as parenthesis being used.
     *
     * C++ also has another variation on the while loop that is called a do while loop
     * which can be useful:
     *      https://www.w3schools.com/cpp/cpp_do_while_loop.asp
     */

    /*In Python:

    x = 0
    while x < 5:
        print("x is still smaller than 5")
        x += 1

    */

    int y = 0;
    while(y < 5){
        cout << "x is still less than 5" <<endl;
        y += 1;         // or "y++;" does the same function
    }


/*===FOR LOOPS==========================================================================*/

    /* For loops in C++ are more explicitly stated than those in Python. Many of you would be used to
     * using the "in range" for loop, or using "for x in array", where array was an array of items, and the
     * loop would loop through as many times are there are items in the array. There are many other Python
     * functions you can use on for loops. In C++, our for loops will consist of the following:
     *
     * The "for" keyword, followed by parenthesis
     * The variable being set or used before the loop starts
     * The condition of the loop
     * What happens after each iteration of the loop
     * The executed code
     *
     * Let's take a look at an example:
     */

    /*In Python:

        for x in range(5):
            print("Hello!")

    */

    for(int x = 0; x < 5; x++){
        cout << "Hello!" << endl;
    }


/*===FUNCTION CALLS (INVOKE/INVOCATION)=================================================*/

    /*  Function calls in C++ are pretty similar to Python, just make sure to end the
     *  instruction with a semicolon ";"
     */

    /*  In Python:
        is_leap_year(2000)

        # NOTE: This function returns a bool, save this in a variable or use immediately on the same line
        Python:
        is_leap = is_leap_year(2000)

        C++:
        bool is_leap = is_leap_year(2000);
     */

    // CHALLENGE: Can you write the function definition to give the correct output?
    cout << "2000 is a leap year: " << is_leap_year(2000) << endl;      // Should print 1 (true)
    cout << "1896 is a leap year: " << is_leap_year(1896) << endl;      // Should print 1
    cout << "1900 is a leap year: " << is_leap_year(1900) << endl;      // Should print 0 (false)


    return 0;
}

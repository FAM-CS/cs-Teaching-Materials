#include <iostream>
#include <string>

using namespace std;

/* In C++, similar to variables, functions must be declared by stating the type of data it will
 * return. In Python, you can simply type:
  
   def add_numbers(num1, num2):
    return num1 + num2

 * In C++, you must declare the return type before the function in place of the "def" keyword, as well
 * as surround your executable code in curly braces, instead of simply indenting (do still indent though!). 
 * It's important to note that you do not put a semi-colon at the end of a function definition, after the 
 * closing curly brace. 
 */

int add_numbers(int num1, int num2){
 return num1 + num2;
}

string say_hello(){
    return "Hello!";
}

void print_hello(){
    cout << "Hello!" <<endl;
}

int main(){
    int a = 10;
    int b = 20;
    int c = add_numbers(a, b);

    cout << c <<endl;

    cout << say_hello() <<endl;

    print_hello();


}
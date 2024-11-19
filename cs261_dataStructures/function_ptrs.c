#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//? Key idea: Functions are stored as addresses in memory
//? We can swap functions with the same return and parameter types

int add(int a, int b) {
    return a + b;
}


int multiply(int num1, int num2) {
    return num1 * num2;
}


void nested_do_operation(int num1, int num2, int (*operation)(int, int)) {
    int result = operation(num1, num2);
    printf("nested_operation(%d, %d): %d\n", num1, num2, result);
}


void do_operation(int num1, int num2, int (*operation)(int, int)) {
    //? 3rd argument is the function pointer
    int result = operation(num1, num2);
    printf("operation(%d, %d): %d\n", num1, num2, result);

    nested_do_operation(num1, num2, operation);
}


int main() {
    //? compile: gcc -std=c99 functionpointers.c
    //? run: ./a.out

    do_operation(2, 3, add);            // expect 5, and nested 5

    printf("\n");

    do_operation(2, 3, multiply);       // expect 6, and ensted 6

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//? Key Idea: (void *) void pointers can store an address to any data type
//? We can store anything we want in a void pointer
#define ARR_SIZE 3
int main() {
    // compile: gcc -std=c99

    //~ allocate an array to hold 3 addresses
    void* *arr = malloc(ARR_SIZE * sizeof(void *));

    //~ store 5 at the first index
    int value = 5;
    arr[0] = &value;

    //~ print 5
    // Note: I have to typecast arr[0] (address) to an int pointer before dereferencing
    printf("arr[0]: %d\n", * (int *)arr[0]);

    //~ store random values and print them
    srand(time(NULL)); // set seed
    int *numbers = malloc(ARR_SIZE * sizeof(int));

    for (int i = 0; i < ARR_SIZE; i++) {
        numbers[i] = rand() % 10;  // 0 - 9
    }

    printf("numbers: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");


    return 0;
}
#include <stdio.h> //standard input/output
#include <stdlib.h> //malloc()
#include <time.h>


// C = gcc-std=c99 -g  main.c -o pugach   vs     C++ = g++ -g main.cpp -o pugach
//! No pass by referemce in C, only option is pass by pointer or value



// c97 is default for engr server, use c99 standard

struct plant {
    int growth;
};

int main() {
    srand(time(NULL));

    // struct plant mine;
    // mine.growth = 90;
    // printf("%d \n", mine.growth);


    //? Static Arrays + I/O
	//array declaration
	int rollNo[10];

	//gen numbers
	for(int i=0;i<10;i++) {
        rollNo[i] = rand() % 11;

        //? cin
        // printf("enter num: ");
	    // scanf("%d",&rollNo[i]);
    }

	//printing
	for(int i=0;i<10;i++){
        //? cout
	    printf("[%d]: %d\n", i, rollNo[i]);       // cout for C
        //
        // print(f"[{i}]: {rollNo[i]}")  // python
        // cout << "[" << i << "]: " << rollNo[i];  // C++
    }
    printf("\n");

    //? Void ptrs
    // void* (void ptrs) allow us to store any data type inside of a pointer
    // it's a dummy pointer that holds the address of a value

    char cat = 'c';
    int cat_num = 67; // captial C in ascii
    void* cat_ptr = &cat;


    printf("cat: %c \n", cat);
    printf("&cat: %p \n", &cat);
    printf("cat_ptr: %p \n", cat_ptr);
    printf("* (char*)cat_ptr: %c \n", * (char*)cat_ptr);
    //
    printf("\n");
    cat_ptr = &cat_num;
    printf("cat_ptr: %p \n", cat_ptr);
    printf("* (int*)cat_ptr: %d \n", * (int*)cat_ptr);
    printf("* (char*)cat_ptr: %c \n", * (char*)cat_ptr);


    //? Dynamic memory in C compared to C++
    //
    // C++ new, C has malloc(size_t)   (size_t is a number data type)
    // int* arr = new int[5];                  // C++
    int* arr = malloc(sizeof(int) * 5);     // C
    // C++ delete,  C has free()
    // delete [] arr;                          // C++
    free(arr);                              // C




	return 0;
}

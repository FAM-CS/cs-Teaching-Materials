#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char a = 'a';
    char b = 'b';

    char *hello_immutable = "hello";
    char hello_mutable[6] = "hello";
    char *charptr_calloc_mutable = calloc(6, sizeof(char));    // forgot how to do this lol

    //! can't modify hello_immutable
    // hello_immutable[0] = 'm';   //! Segfault error
    hello_mutable[0] = 'm';
    charptr_calloc_mutable[0] = 'm';
    //
    printf("hello_immutable: %s\n", hello_immutable);
    printf("hello_mutable: %s\n", hello_mutable);
    printf("charptr_malloc_mutable: %s\n", charptr_calloc_mutable);
}
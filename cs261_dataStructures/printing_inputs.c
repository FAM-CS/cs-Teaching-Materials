#include <stdio.h>     //? for printing
#include <stdlib.h>
#include <string.h>    //? for some string functions



int main(int argc, char const *argv[]) {
    // char input[501] = {0};  // space for 500 characters

    // for (int i = 0; i < 3; i++) {
    //     printf("Enter a word: ");
    //     scanf("%s", &input);
    //     printf("Recieved: %s\n", input);
    // }

    char *input = calloc(501, sizeof(char));  // space for 500 characters

    for (int i = 0; i < 3; i++) {
        printf("Enter a word: ");
        scanf("%s", input);
        printf("Recieved: %s\n", input);
    }

    free(input);

	return 0;
}

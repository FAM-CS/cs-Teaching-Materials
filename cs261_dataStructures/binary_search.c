#include <stdio.h> //standard input/output
#include <stdlib.h> //malloc()
#include <time.h>

#define SIZE 10

int find(int nums[]) {

}


int main() {
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num_to_find = 3;
    int result = find(numbers, SIZE, num_to_find);

    if (result) {
        printf("Found %d\n", num_to_find);
    } else {
        printf("Did not found %d\n", num_to_find);
    }

    return 0;
}
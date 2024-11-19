#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void count_up(int n) {
    if (n == 0) {
        return;
    }

    count_up(n - 1);

    printf("%d\n", n);
}


int main() {
    count_up(10);

    return 0;
}
#include <cstdio>
using namespace std;

int main() {
    int birds_in_park[2] = {20, 30};

    // Which park should we visit for bird watching?
    if (birds_in_park[0] > birds_in_park[1]) {
        printf("Watch birds in park 0!\n");
    }
    else {
        printf("Watch birds in park 1!\n");
    }

    for (int i = 0; i < 2; ++i) {
        printf("Birds at park %d: %d\n"
               , i, birds_in_park[i]);
    }

    return 0;
}

#include <iostream>
using namespace std;

// Global constant
#define NUM_PLAYERS 4

int main() {
    int bowling_scores[NUM_PLAYERS] = {90, 120, 88, 61};

    // Show scores of each player
    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << "player[" << i << "] " << bowling_scores[i] << endl;
    }

    return 0;
}

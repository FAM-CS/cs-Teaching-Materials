#include <iostream>
using namespace std;

const int ARR_SIZE = 2;

void player_score(int player_num, int score) {
    cout << "\U0001F3B3 Player" << player_num
         << " score: " << score << endl;
}

int main() {
    int scores[ARR_SIZE] = {39, 54};

    for (int i = 0; i < ARR_SIZE; ++i) {
        int player_number = i + 1;
        player_score(player_number, scores[i]);
    }

    return 0;
}

#include <iostream>
#include <ctime>
using namespace std;

// Global constant
#define BIRD_TIME 8

bool is_bird_watching_time(int, bool);
int get_time();

int main() {
    int num_birds = 4;
    bool garfield_is_indoors = true;

    if (is_bird_watching_time(num_birds, garfield_is_indoors)) {
        cout << "Good time for bird watching!\n";
    }
    else {
        cout << "Not a good time for bird watching.\n";
    }
    return 0;
}

bool is_bird_watching_time(int num_birds, bool cat_is_indoors) {
    return
        num_birds > 0
        && get_time() == BIRD_TIME
        && cat_is_indoors;
}

int get_time() {
    const std::time_t ct = std::time(nullptr);
    return std::localtime(&ct)->tm_hour;
}
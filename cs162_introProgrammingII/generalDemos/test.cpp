#include <iostream>

using namespace std;

class CreateDestroy {
public:
   CreateDestroy() { cout << "constructor called, ";}
   ~CreateDestroy() { cout << "destructor called, ";}
};

int main() {
    // for (int i = 0; i < 5; i++) {
    //     cout << "Frame " << i + 1 << "\n";
    //     cout << "Hit enter to continue: ";
    //     cin.ignore();
    //     // cout << endl;

    //     cout << "Blah!\n";
    // }

    // int row = 5, col = 6;

    // double long x[5][6];

    // for (int i = 1; i < row; i++) {
    //     for (int j = 1; i < col; j++) {
    //         x[i][j] = 4;
    //     }
    // }

    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; i < col; j++) {
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "What happened\n";

    int num = 0;

    while (true) {
        cout << "Enter num: ";
        cin >> num;

        if (num == 5) {
            break;
        }
    }


    cout << "==OUT OF LOOP==" << endl;

   return 0;
}
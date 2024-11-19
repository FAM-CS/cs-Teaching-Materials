#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    string breed;
    float weight;
};

void print_cat(Cat *cat_ptr) {
    //! Note: cat_ptr->name is the same as (*cat_ptr).name
    cout << "Name: " << cat_ptr->name << endl;
    cout << "Breed: " << cat_ptr->breed << endl;
    cout << "Weight: " << cat_ptr->weight << endl;
}

int main() {
    Cat garfield {
          name: "Garfield"
        , breed: "Orange Tabby"
        , weight: 5};

    print_cat(&garfield);

    return 0;
}

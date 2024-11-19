/*********************************************************************
 ** Program Filename:  demo.cpp
 ** Author: Fatima Moussaoui
 ** Date: 04/19/2022
 ** Description: Demo of file I/O and passing file object
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <fstream>
#include <string>

// Other way to include direct names
// using std::string;
// using std::cout;
// using std::cin;
// using std::endl;
// using std::fstream;

using namespace std;


struct Wizard {
    string name;
    int age;
    string eye_color;
};

/*********************************************************************
 ** Function: read_file
 ** Description:
 ** Parameters:
 **     file - file object (MUST be a refernece, preserves file+cursor state)
 *********************************************************************/
void read_file(fstream &file){
    //! File I/O in C++ works pretty much the same as CIN and COUT
    //
    //? Initialize some variables to print to console
    string name = "John_Doe";
    int age = 0, num_people = 0;
    string eye_color = "Gray";

    //~ Get number of people
    file >> num_people;     // cin >> num;
    // this reads the file until it hits a space or new line
    // after line 36 executes, the file cursor is at the next line in the file

    //! Use a struct instead!
    Wizard* wizards = new Wizard[num_people];


    //? Read file until we have reached End Of Filen
    // while (!file.eof) {
    //     // code here
    //     // read it in
    //     file >> name;
    //     file >> age;
    //     file >> eye_color;

    //     // Verify information was read in correctly
    //     cout << "Name: " << name << endl;
    //     cout << "Age: " << age << endl;
    //     cout << "Eye color: " << eye_color << endl << endl;
    // }
    // cout << "Reached End of File.\n";
    //! We don't need to do this because we have a known file format

    //~ Read in data and print what we read in immediately
    for (int i = 0; i < num_people; ++i) {
        // read it in
        // file >> name;
        // file >> age;
        // file >> eye_color;

        file >> wizards[i].name;
        file >> wizards[i].age;
        file >> wizards[i].eye_color;

        // Verify information was read in correctly
        // cout << "Name: " << name << endl;
        // cout << "Age: " << age << endl;
        // cout << "Eye color: " << eye_color << endl << endl;

        // With an array of structs...
        cout << "Name: " << wizards[i].name << endl;
        cout << "Age: " << wizards[i].age << endl;
        cout << "Eye color: " << wizards[i].eye_color << endl << endl;
    }
    // Good practice to close files when you're done with them
    // OR when you need to reuse the same file object for a different file
    file.close();


    //? File output example, specify output option
    file.open("out.txt", ios::out);

    file << "Writing things." << endl;
    file << "Hello World!\n";

    file.close();
}


/*********************************************************************
 ** Function: main
 ** Description:
 ** Parameters:
 **     argc - number of command line arguments passed in (argument count)
 **     argv[] - array for command line arguments passed in (argument vector)
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
int main(int argc, char* argv[]){
    string filename = "ex.txt";
    // char* filename = "ex.txt"; // is read only (can't modify string)

    //? Different file stream objects have different defaults for input/output
    // ~ Alternatives to opening your file
    // fstream file(filename.c_str());    // Creates a file object, default constructor
    // ifstream input_file;     // input only
    // ofstream output_file;    // output only
    fstream file;               // both input/output

    //! Must convert string type to c-style string as that is
    //! the type open() expects,
    //! it can't convert string to char*
    file.open(filename.c_str());

    //? When you open the file, the file "cursor" is right at the start of the file (before 2)

    //~ Try to open file
    if (file.is_open()) {
        read_file(file);
    }
    else {
        // File failed to open
        cout << "\nError opening file. End of Program.\n" << endl;
    }

    return 0;
}

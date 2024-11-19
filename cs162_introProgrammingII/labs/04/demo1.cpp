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
#include <cstddef>         // std::size_t

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::fstream;


/*********************************************************************
 ** Function: read_file
 ** Description:
 ** Parameters:
 **     argc - number of command line arguments passed in (argument count)
 **     argv[] - array for command line arguments passed in (argument vector)
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
void read_file(std::ifstream &file){
    string name = "";
    int age = 0;
    string eye_color = "";

        file >> name >> age >> eye_color;

        cout << "FUNC\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Eye color: " << eye_color << endl;

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
    std::ifstream file;

    file.open(filename.c_str());        // open() expects a c-style string

    string name = "";
    int age = 0;
    string eye_color = "";

    file >> name >> age >> eye_color;

    cout << "IN MAIN\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Eye color: " << eye_color << endl;

    read_file(file);


    file.close();

    std::ofstream out_file;
    out_file.open("out.txt");

    out_file << "Hello World!\n";

    return 0;
}

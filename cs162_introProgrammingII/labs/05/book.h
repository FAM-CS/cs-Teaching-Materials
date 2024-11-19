#ifndef BOOK_H
#define BOOK_H

#include <string>

using std::string;

class Book {
private:
    string title;
    string author;
    int pages;
    float rating;

public:
    Book();                                // Default Constructor
    // Book(string, string, int, float);       // Parameterized Constructor

    //? I use chain setters so the return type is not void
    //~ Chain setters let you chain operations on an obejct on the same line
    //  Book mybook;
    //  mybook.set_title("CS162").set_author("All");

    Book& set_title(const string);
    Book& set_author(const string);
    string get_title() const;           // getter / accessor
    string get_author() const;           // getter / accessor
    void print();
};


#endif
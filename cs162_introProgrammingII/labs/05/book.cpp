/*********************************************************************
 ** Program Filename:  book.cpp
 ** Author: Fatima Moussaoui
 ** Date: 04/25/2022
 ** Description: Implementation file for Book class
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <string>

#include "./book.h"
using namespace std;

// class Book:
//     string title;
//     string author;
//     int pages;
//     float rating;


Book::Book() {
    title = "N/A";
    author = "N/A";
    pages = 0;
    this->rating = 0.0;
    // (*this).rating = 0.0;
}

// Book::Book() : title("N/A"), author("N/A") {

// }


Book& Book::set_title(const string value) {
    this->title = value;

    return *this;
}
Book& Book::set_author(const string value) {
    this->title = value;

    return *this;
}

string Book::get_title() const {
    return title;
}
string Book::get_author() const {
    return author;
}



void Book::print() {
    cout << "----------------------------------------------\n";
    cout << "Title: " << title << endl;
    cout << "By: " << author << endl;
    cout << "Num pages: " << pages << "\t\tRating: " << rating << endl;
    cout << "----------------------------------------------\n";
}

/*********************************************************************
 ** Program Filename:  boilerplate.cpp
 ** Author: FirstName LastName
 ** Date: 00/00/20--
 ** Description: General template for C++ program
 ** Input:
 ** Output:
 *********************************************************************/
#include <iostream>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/*=======WAYS TO CREATE 2D DYN ARRAY================================================*/
// Pass by value
string** init1(int row, int col) {
	// Allocate space to hold [row] arrays
	string** arr = NULL;
	arr = new string* [row];

    // For each array, make it size [col]
	for (int i = 0; i < row; ++i) {
		arr[i] = new string[col];
    }

    // Initialize elements to "cat"
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j){
			arr[i][j] = "apple";
        }
    }

	return arr;
}


// Pass by pointer
void init2(string** *arr, int row, int col){
	*arr = new string*[row];
	for (int i = 0; i < row; ++i){
		(*arr)[i] = new string[col];
	}

    // Initialize elements to 0
	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			(*arr)[i][j] = "banana";
		}
	}
}


// Pass by reference
void init3(string** &arr, int row, int col){
	arr = new string*[row];
	for (int i = 0; i < row; ++i)
		arr[i] = new string[col];

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arr[i][j] = "orange";
}


// PRINTING
void print_arr (string** arr, int row, int col) {
	for (int i = 0; i < row; ++i) {
        // For each row, print the columns with a space
		for (int j = 0; j < col; ++j) {
			cout << arr[i][j] << " ";
		}
        // New line for next row
		cout << endl;
	}
    cout << endl;   // leave whitespace
}


/*=======DELETE DYNARRAY================================================*/
/*********************************************************************
 ** Function: main
 ** Description:
 ** Parameters:
 **     arr - 2d array
 **     row - number of rows
 ** Pre-Conditions: What needs to be true before function is called
 ** Post-Conditions: What is true when function ends
 *********************************************************************/
void delete_arr (string** &arr, int row){
	for (int i = 0; i < row; ++i)
	{
		delete [] arr[i];
		arr[i] = NULL;
	}
	delete [] arr;
	arr = NULL;
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
int main(int argc, char**argv){
	string** fruit_bin = NULL;
	int row = 4, col = 5;

    fruit_bin = init1(row, col);
	print_arr(fruit_bin, row, col);
    delete_arr(fruit_bin, row);

    init3(fruit_bin, row, col);
	print_arr(fruit_bin, row, col);
    delete_arr(fruit_bin, row);
    
    // Pass by value
	fruit_bin = init1(row, col);
	print_arr(fruit_bin, row, col);
    delete_arr(fruit_bin, row);




	return 0;
}

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
string* init1(int row, int col) {
	// Allocate space to hold [row] arrays
	string* arr = NULL;
	arr = new string[row];

    // Initialize elements to "cat"
	for (int i = 0; i < row; ++i) {
			arr[i] = "apple";
    }

	return arr;
}


// // Pass by pointer
void init2(string* *arr, int row, int col){
	*arr = new string*[row];

    // Initialize elements to 0
	for (int i = 0; i < row; ++i){
			(*arr)[i] = "banana";
	}
}


// // Pass by reference
void init3(string* &arr, int row, int col){
	arr = new string*[row];
	for (int i = 0; i < row; ++i)
		arr[i] = new string[col];

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arr[i][j] = "orange";
}



void delete_arr1(string* *arr){
	delete [] *arr;
	*arr = NULL;
}

void delete_arr2(string* arr){
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
	int size = 5;
	string** array = NULL;

    init3(array, size, size);

    cout << "Before deleting: " << array << endl;
    delete_arr2(array);
    cout << "After deleting: " << array << endl;



	return 0;
}

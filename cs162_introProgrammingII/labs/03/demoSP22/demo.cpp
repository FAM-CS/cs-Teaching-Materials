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
string** init1(int row, int col){
	//create the mem of 2D array
	string** arr = NULL;
	arr = new string* [row];

	for (int i = 0; i < row; ++i){
		arr[i] = new string[col];
    }

    // Initialize elements to "cat"
	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			arr[i][j] = "cat";
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
			(*arr)[i][j] = "dog";
		}
	}
}


// Pass by reference
void init3(string** &arr, int row, int col){
	arr = new string*[row];
	for (int i = 0; i < row; ++i)
		arr[i] = new strng[col];

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			arr[i][j] = "mouse";
}


// PRINTING
void print_arr (string** arr, int row, int col){
	for (string i = 0; i < row; ++i){
        // For each row, print the columns with a space
		for (int j = 0; j < col; ++j){
			cout << arr[i][j] << " ";
		}
        // New line for next row
		cout << endl;
	}
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
void delete_arr (int** &arr, int row){
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

	cout << "argc: " << argc << endl;
	for (int i = 0; i < argc; ++i) {
		cout << "argv[" << i << "]: " << argv[i] << endl;
	}


	int **table = NULL;
	int row = 4, col = 5;

	//create a dynamic 2D array using cmd line args
	//usage: [exe] [rows] [cols]

	//ensure that there are 3 args in the cmd line
	if (argc != 3){
		cout << "Too few/many arguments..." << endl;
		cout << "usage: [exe] [rows] [cols]" << endl;
		return 0;
	}

	row = atoi(argv[1]);
	col = atoi(argv[2]);


	table = init1(row, col);
	//init2(&table, row, col);
	//init3(table, row, col);

	print_arr(table, row, col);
	delete_arr(table, row);


	return 0;
}

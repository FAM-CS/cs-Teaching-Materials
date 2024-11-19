#include <iostream>

using namespace std;


    /* For your first lab and project, there are a few concepts you'll need to be familiar with that are
     * done differently in C++ - namely pointers and memory allocation, command line arguments, and
     * structures, commonly called structs. We'll go over each briefly in the following demo, though I'd
     * encourage you to seek out other resources for more in-depth examples.
     */


// NOTE
// Variables and objects are stored in some memory process that we
// have dubbed/split into the Stack (os-defined) and Heap (user-defined)
//
// The memory address space can be thought of as a table or sets of boxes
// where each cell contains its address (hexadecimal) and the value stored there.


int main(){

    /* This implementation of an array is similar to that used in Python. However, this implementation, and
     * Python's, are doing work for you under the hood.
     */


    cout << "Please enter a size for the array: ";
    int size;
    cin >> size;

    int array[size];

    for(int x = 0; x < size; x++){
        cout << "Enter a value: ";
        cin >> array[x];
    }
    for(int x = 0; x < size; x++){
        cout << array[x];
    }



/*===DYNAMIC MEMORY===*/

    /* Instead of using this method to create arrays or 2D arrays, you'll be using pointers. Pointers are
     * just another data type that stores the location of another piece of data in memory. These data types
     * can be used in many, many different ways. For the purposes of this demo, though, we'll be looking at
     * how to use pointers to create 1D and 2D arrays.
     */


    cout << "\n";
    cout << "Please enter a size for the second array: ";
    int second_size = 0;
    cin >> second_size;

    int * second_array = new int[second_size]; //When we do this, we allocate dynamic memory, which must later be freed.

    for(int x = 0; x < second_size; x++){
        cout << "Enter a value: ";
        cin >> second_array[x];
    }
    for(int x = 0; x < second_size; x++){
        cout << second_array[x] << " ";
    }

    delete [] second_array; //What happens when we comment this out?

    /* Here, we've created a one dimensional array. How do we create a 2D array? In Python, you'd simply use two sets of
     * square brackets when you initialize the array. With C++, we must do a little of the work that Python does for us
     * under the hood.
     */

    cout << "\n";
    cout << "Enter a size for the 2D array - this size will be used for both dimensions, creating a \"square\" array: ";
    int third_size = 0;
    cin >> third_size;


    /* This step will create an array of arrays with the given size. We'll then have to go through and create each
     * of the other, individual 1D arrays.
     */
    int ** third_array = new int * [third_size];

    /* To create the 1D arrays, within the 2D array, we'll need to use a for loop like so: */
    for(int x = 0; x < third_size; x++){
        third_array[x] = new int[third_size];
    }


    /* Now, we have an array that contains "size" number of arrays. Each of those arrays is also "size" number long.
     * Now, let's go through and populate this array with numbers. To keep this simple, I'll just create a grid of numbers
     * starting from 0 and going up to the number of size - 1.
     */

    for(int x = 0; x < third_size; x++){
        for(int y = 0; y < third_size; y++){
            third_array[x][y] = y;
            cout << third_array[x][y];
        }
        cout << endl;
    }

    /* Don't forget, we have to delete our dynamic memory! With a 2D array, we must delete our memory the
     * same way we allocated it - using a for loop to iterate through the 2D portion of the array, and delete
     * the 1D arrays contained in each index. This is a common step to forget, so double check your work with valgrind!
     */

    for(int x = 0; x < third_size; x++){ //Deletes each individual, 1D array
        delete [] third_array[x];
    }
    delete [] third_array; //Deletes the array that contained the other arrays

    /* There are many other uses for pointers which we'll explore in class, but for now, this should help you get your
     * footing for the first lab!
     */

    return 0;
}
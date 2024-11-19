#include <iostream>
#include <string>

using namespace std;

/*===STRUCTURES===*/
    /* Structures in C++ allow you to create your own data types - mainly those which will simply store data.
     * Examples could be a shirt data type, a class data type, or a dog data type. Each of these data types can
     * contain other pieces of data/information that helps to define each of them individually. This might
     * sound confusing upfront, so lets take a look at how to implement them. 
     * --An important note -- the definition of structures will often be stored in a separate file. For this
     * example, we'll include it in the main file, and declare it like we would a function. 
     */

    /*First, we have to decide what information is important to know about a shirt. For our example,
     * I'll create a shirt with a number of buttons, a color, and a boolean representing true is it
     * is new, false if it is used. Note that it's good practice to start your structs with a capital letter.
     */





struct Shirt{
    int num_buttons;
    string color;
    bool is_new;
}; //Here, we have to put a semi-colon after the last curly brace, unlike in a function.





/* Now we have created the template off of which our structures will be created. We'll look at how to use
 * these structures a little further on in the tutorial
 */


/* Many languages include functionality that allow you to pass arguments to your main function
 * from the command line. We'll look at how to do this in C++. First, you'll want to create your main
 * function to look like the one shown below:
 */

int main(int argc, char* argv[]){

/*===COMMAND LINE ARGUMENTS===*/
    /* Above, you see that our main function take two arguments. The first argument, the "int argc"
     * argument, is the number of arguments that's been passed in via the command line. Let's look
     * at a few example executions from the command line, and see how many arguments we pass.
     */

    // if(argc != 2){
    //     cout << "Hey dummy, put in the right number of args plz" << endl;
    //     return 1;
    // }

    cout << "\n";
    cout << argc << endl;

    /* The name of the executable, or the program, is the first argument. Therefore, your program will
     * almost always have at least 1 argument. Any additional arguments passed in are added. To access 
     * these other arguments, we must get to them via the array of c-strings in the second argument. Let's
     * look at how this works:
     */

    //for(int x = 0; x < argc; x++){ //this will loop as many times as there are arguments passed in using "argc" in our for loop
        cout << argv[1];
        cout << " ";
    //}
    cout << "\n";

    /* A note to keep in mind is that all of the data that comes in from the "argv" array will be character types.
     * You may want to use this data as an int or boolean, for example, and will need to find tools to help you do this
     * should you need to.
     */

/*===STRUCTURES PT.2===*/
    /* Now let's use the shirt structure we created earlier! We'll start by declaring two different shirt structures, similar
     * to how we declare int or string variables.
     */ 

    int x = 10;
    string word = "hello";
    
    Shirt first_shirt;
    Shirt second_shirt; 

    /* Each of these shirts will have the three attributes we created: button number, color and true or false for is new.
     * These will not have values by default unless set within the structure definition, so let's give them values.
     * To access each of these attributes, often called "members", we'll type the name of the variable, and then use a period
     * to access the attribute, or member, that we wish to change:
     */

    first_shirt.num_buttons = 10;
    first_shirt.color = "red";
    first_shirt.is_new = true;

    second_shirt.num_buttons = 5;
    second_shirt.color = "blue";
    second_shirt.is_new = false;

    /* Now, we can access these member variables in a manner similar to how we access regular variables. Let's print out
     * the information for our first shirt.
     */

    cout << "First shirt number of buttons: " << first_shirt.num_buttons << endl;
    cout << "First shirt color: " << first_shirt.color << endl;
    cout << "Is the first shirt new?: " << first_shirt.is_new << endl; //NOTE - In C++, printing a boolean value will result in 1 if true, 0 if false.
}





/*********************************************************************
** Program Filename:  boilerplate.cpp
** Author: FirstName LastName
** Date: DD-MM-YYYY
** Description: General template for C++ program
** Input:
** Output:
*********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>


using std::string;
using std::cout;
using std::cin;
using std::endl;


struct Node {
    Node *next;
    int val;
};

void print_list(Node *head) {
    Node *curr = head;

    // curr = (*curr).next;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}


Node* add_node(Node* &head, int val){
	Node* new_node = new Node;
    new_node->val = val;
	Node* current = head;
	if (current == NULL){
		head = new_node;
		return head;
	}
	while (current->next != NULL){
		current = current ->next;
	}
	current->next = new_node;

	return head;

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
int main(int argc, char *argv[]) {
    /* new code */
    Node * list;

    add_node(list, 4);
    add_node(list, 3);
    add_node(list, 7);
    add_node(list, 1);

    print_list(list);

    return 0;
}
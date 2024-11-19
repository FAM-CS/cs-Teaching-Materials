#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    void *value;
    struct Node *next;
};

struct List {
    struct Node *head;
};


struct List* list_create() {
    struct List *list = malloc(sizeof(struct List));
    //? equivalent in C++: `List * mylist = new List;   // new List[1]`
    list->head = malloc(sizeof(struct Node));
    list->head->next = NULL;

    return list;
}


void push_back(struct List *list, void *value) {
    //~ Create new node
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->value = value;   //? new_node->value is short for (*new_node).value
    new_node->next = NULL;

    // // Case: list is empty      //! What if we don't have to consider special cases?
    // if (list->head == NULL) {
    //     list->head = new_node;
    //     return;
    // }
    // Case: list is not empty
    struct Node *prev = list->head;
    while (prev->next != NULL) {
        prev = prev->next;
    }
    prev->next = new_node;
}


void print_list(struct List *list) {
    struct Node *current = list->head->next;

    while (current) {
        printf("%d ", * (int *) current->value);
        current = current->next;
    }
    printf("\n");

}


int main() {
    // compile: gcc -std=c99
    int x = 1, y = 2, z = 3;

    struct List *my_list = list_create();


    push_back(my_list, &x);
    push_back(my_list, &y);
    push_back(my_list, &z);

    print_list(my_list);

    //! For every malloc() we need a corresponding free()
    struct Node *prev = my_list->head;
    //
    while (my_list->head) {
        prev = my_list->head;
        my_list->head = my_list->head->next;
        free(prev);
    }
    free(my_list);

    return 0;
}


// void push_front(struct List *list, void *value) {
//     //~ Create new node
//     struct Node *new_node = malloc(sizeof(struct Node));
//     new_node->value = value;    //? new_node->value is short for (*new_node).value
//     new_node->next = NULL;
//     //
//     new_node->next = list->head;
//     list->head = new_node;
// }
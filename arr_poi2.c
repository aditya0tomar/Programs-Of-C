#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

// Function to print the linked list
void printLinkedlist(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Set head
    head = one;

    // Print the linked list
    printLinkedlist(head);

    return 0;
}
//create a function named create to
#include <stdio.h>

// Define self-referential structure
struct Node {
    int data;
    struct Node *next; // Pointer to the next node of the same structure
};

int main() {
    struct Node n1, n2;

    // Assign values
    n1.data = 10;
    n2.data = 20;

    // Linking nodes
    n1.next = &n2;
    n2.next = NULL;

    // Accessing values using self-referential pointer
    printf("n1 data: %d\n", n1.data);
    printf("n2 data through n1: %d\n", n1.next->data);

    return 0;
}
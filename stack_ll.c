//stack operation using linked list
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};
// Stack structure
struct Stack {
    struct Node* top;
};
// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Function to initialize the stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = NULL;
    return stack;
}
// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}


// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d pushed to stack.\n", value);
}
// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1; // Indicating stack is empty
    }
    struct Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = stack->top->next;
    free(temp);
    printf("Popped element: %d\n", poppedValue);
    return poppedValue;
}
// Function to peek at the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Nothing to peek.\n");
        return -1; // Indicating stack is empty
    }
    return stack->top->data;
}
// Function to display all elements of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// Main function to demonstrate stack operations
int main() {
    struct Stack* stack = createStack();
    int choice, value;

    while (1) {
        printf("\n----- Stack Menu -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(stack, value);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                value = peek(stack);
                if (value != -1) {
                    printf("Top element is: %d\n", value);
                }
                break;
            case 4:
                display(stack);
                break;
            case 5:
                free(stack); // Free allocated memory for stack
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
// Stack implementation using array in C
#define SIZE 100  // Define maximum size of stack

// Global variables
int stack[SIZE];
int top = -1;

// Function to push element onto stack
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Function to pop element from stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

// Function to peek at the top element
void peek() {
    if (top == -1) {
        printf("Stack is empty. Nothing to peek.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// Function to display all elements of stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
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
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

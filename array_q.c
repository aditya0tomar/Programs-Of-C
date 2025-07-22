//array representation of a queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;
 
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full. Cannot enqueue %d.\n", value);
        return;
    }
    if (front == -1) {
        front = 0; // Initialize front if queue was empty
    }
    rear++;
    queue[rear] = value;
    printf("Enqueued %d to the queue.\n", value);
}
// Function to dequeue an element from the queue
int dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Indicating queue is empty
    }
    int value = queue[front];
    front++;
    if (front > rear) { // Reset queue if it becomes empty
        front = rear = -1;
    }
    printf("Dequeued %d from the queue.\n", value);
    return value;
}
// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
// main function to demonstrate the queue operations
int main() {
    int choice, value;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

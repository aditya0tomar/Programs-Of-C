#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and next pointer
    newNode->data = value;
    newNode->next = *head;

    // Update head to point to new node
    *head = newNode;

    printf("%d inserted at the beginning.\n", value);
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n----- Menu -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(&head, value);
            break;
        case 2:
            displayList(head);
            break;
        case 3:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

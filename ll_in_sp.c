#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at specific position
void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (position < 1) {
        printf("Invalid position! Must be >= 1\n");
        free(newNode);
        return;
    }

    if (position == 1) {
        // Insert at beginning
        newNode->next = *head;
        *head = newNode;
        printf("%d inserted at position %d\n", value, position);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("%d inserted at position %d\n", value, position);
}

// Function to display the list
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
    int choice, value, position;

    while (1) {
        printf("\n----- Menu -----\n");
        printf("1. Insert at Specific Position\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter position to insert at: ");
            scanf("%d", &position);
            insertAtPosition(&head, value, position);
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
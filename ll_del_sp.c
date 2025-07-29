#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at end (for building list)
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("%d inserted at the end.\n", value);
}

// Function to delete a node from a specific position
void deleteFromPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position < 1) {
        printf("Invalid position! Position must be >= 1.\n");
        return;
    }

    struct Node* temp = *head;

    // Delete from beginning
    if (position == 1) {
        *head = temp->next;
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
        return;
    }

    // Traverse to the node before the position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return;
    }

    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    printf("Deleted node with value: %d\n", toDelete->data);
    free(toDelete);
}

// Function to display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    struct Node* temp = head;
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
        printf("1. Insert at End\n");
        printf("2. Delete from Specific Position\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtEnd(&head, value);
            break;
        case 2:
            printf("Enter position to delete from: ");
            scanf("%d", &position);
            deleteFromPosition(&head, position);
            break;
        case 3:
            displayList(head);
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
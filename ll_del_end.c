#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the end
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

// Function to delete the last node
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // If only one node exists
    if ((*head)->next == NULL) {
        printf("Deleted node with value: %d\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }

    // Traverse to second-last node
    struct Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    printf("Deleted node with value: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
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
    int choice, value;

    while (1) {
        printf("\n----- Menu -----\n");
        printf("1. Insert at End\n");
        printf("2. Delete at End\n");
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
            deleteAtEnd(&head);
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

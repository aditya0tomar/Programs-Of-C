// STRUCT CODE FOR DELETEION FROM BEGINING
// STRUCT CODE FOR DELETEION FROM END
#include <stdio.h>
#include <stdlib.h> 
void create();
void display();
void delete_beginning();//here we defining our function
void delete_end();
void search();
struct node {
    int info;
    struct node *next;//creatin a struct which is user define
};
struct node *start = NULL;
int main() {
    int choice;
    while (1) {
        printf("\n Hey please choose your choice for tas from below\n");
        printf("\n1. Create your node\n");
        printf("2. Display the node\n");//creating printf message for display       
        printf("3. Delete from beginning\n");
        printf("4. Delete from end\n");
        printf("5. Search values in node\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                delete_beginning();
                break;
            case 4:
                delete_end();
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void create() {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    
    printf("Enter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    
    if (start == NULL) {
        start = temp;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display() {
    struct node *ptr = start;
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("List elements: ");
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}
void delete_beginning() {
    if (start == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    
    struct node *temp = start;
    start = start->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}
void delete_end() {
    if (start == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    
    struct node *ptr = start;
    if (ptr->next == NULL) {
        free(ptr);
        start = NULL;
        printf("Node deleted from the end.\n");
        return;
    }
    
    while (ptr->next->next != NULL) {
        ptr = ptr->next;
    }
    
    free(ptr->next);
    ptr->next = NULL;
    printf("Node deleted from the end.\n");
}
void search()
{
    struct node *ptr = start;
    int value, found = 0;
    
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &value);
    
    while (ptr != NULL) {
        if (ptr->info == value) {
            printf("Value %d found in the list.\n", value);
            found = 1;
            break;
        }
        ptr = ptr->next;
    }
    
    if (!found) {
        printf("Value %d not found in the list.\n", value);
        return;
    }
    
}
    
//searching for value in a linked list 
//step 1 create a linked list
//step 2 display the linked list
//step 3 search for a value in the linked list
//step 4 exit the program
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void search();
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int choice;
    while(1) {
        printf("\n1. Create\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;

            case 3:
                search();   
                break;
            case 4:
                printf("Exiting the program.\n");   
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void create()
{
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
void display()
{
    struct node *ptr = start;
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("The elements of the list are: ");
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}
//search function to find a value in the linked list
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
    


/*#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int value;
    struct node *next;
};

// Global start pointer
struct node *start = NULL;

// Function declarations
void create();
void display();

int main() {
    int choice;
    while(1) {
        printf("\n1. Create a new node\n");
        printf("2. Display the list\n");
        printf("3. Exit\n");
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
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

// Create a new node and add to end of list
void create() {
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter the value of the node: ");
    scanf("%d", &temp->value);
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

// Display the list
void display() {
    struct node *ptr = start;
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("The elements of the list are: ");
    while (ptr != NULL) {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}
*/


#include<stdlib.h>
#include <stdio.h>
void create();
void display();
struct node
{
int info;
struct node *next;
};
struct node *start=NULL;
int main()
{
int choice;
while(1){
printf("\n 1.Create \n");
printf("\n 2.Display \n");
printf("Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
display();
break;
default:
printf("\n Wrong Choice:n");
break;
}
}
return 0;
}
void create()
{
struct node *temp,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data value for the node:\t");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}
void display()
{
struct node *ptr;
printf("\n The List elements are:\t");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
printf("%d \n",ptr->info ); }
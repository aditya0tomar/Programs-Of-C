#include<stdio.h>
// This program uses structures and functions to manage car information.
// It defines a structure for car details and includes a function to print those details.
// The program prompts the user to enter the car model name, seating capacity, and fuel type,
// and then displays the entered information.

struct car
{
    char name[20];
    int seat;
    char fuel[10];
};

void print_struct(struct car *);

int main()
{
    struct car tata;
    printf("Enter the model name : "); 
    scanf("%s",tata.name);
    printf("\nEnter the seating capacity : ");
    scanf("%d",&tata.seat);
    printf("\nEnter the fuel type : ");
    scanf("%s",tata.fuel);
    print_struct(&tata);

    return 0;
}

void print_struct(struct car *ptr)
{
    printf("\n---Details---\n");
    printf("Name: %s\n", ptr->name);
    printf("Seat: %d\n", ptr->seat);
    printf("Fuel type: %s\n", ptr->fuel);
    printf("\n");
}

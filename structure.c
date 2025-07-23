#include <stdio.h>
//declaration of a structure
int main() {
struct Person {
    char name[50];
    int age;
    float height;
};

//initialization of a structure
struct Person p1 = {"Aditya", 21, 5.9};
//printf ("name: %s\nage: %d\nheight: %.1f\n", p1.name, p1.age, p1.height);

//accessing members of a structure
printf("%s", p1.name);   // Using .
struct Person *ptr = &p1;
printf("%d", ptr->age);  // Using ->
}

// C program to demonstrate the use of array of pointers
#include <stdio.h>

int main()
{
    // declaring some temp variables
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    // array of pointers to integers
    int* ptr_arr[3] = { &var1, &var2, &var3 };

    // traversing using loop
    for (int i = 0; i < 3; i++) {
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    }

    return 0;
}
// this program demonstrates the use of an array of pointers to integers.
// It initializes three integer variables and creates an array of pointers to these variables.
// The program then traverses the array and prints the value and address of each variable using the pointers.
// The output will show the values of var1, var2, and var3 along with their respective addresses in memory.
// This is useful for managing multiple variables efficiently, especially when dealing with dynamic memory allocation or arrays
// of data structures.
// The program uses a simple loop to iterate through the array of pointers, dereferencing each pointer to access the value it points to.
// The output format includes the variable number, its value, and its address in memory, providing a clear view of how pointers can be 
//used to reference and manipulate data in C.
// This approach is particularly useful in scenarios where you need to manage multiple variables or data structures dynamically,
// allowing for efficient memory usage and manipulation without the need for extensive copying of data.
// The program is straightforward and serves as a basic example of using pointers and arrays in C.
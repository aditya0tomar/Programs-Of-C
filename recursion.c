#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;  // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}


            


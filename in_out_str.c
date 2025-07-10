#include <stdio.h>

int main() {
    char name[50];

    // Input using fgets()
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Output using printf()
    printf("Hello, %s", name); // Note: fgets includes the newline, so no extra \n is needed here.

    // Example with scanf (for single word)
    char single_word[20];
    printf("Enter a single word: ");
    scanf("%s", single_word);
    printf("You entered: %s\n", single_word);

    return 0;
}
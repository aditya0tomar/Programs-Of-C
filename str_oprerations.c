#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);  // str1 becomes "HelloWorld"

    printf("Concatenated String: %s\n", str1);
    printf("Length: %lu\n", strlen(str1));
    printf("Comparison: %d\n", strcmp(str1, "HelloWorld"));

    return 0;
}

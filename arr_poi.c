#include<stdio.h>
#include<string.h>
int main(){
       char name[]="harry potter";
       printf("%c",*name);
       printf("%c",*(name+1));
       printf("%c",*(name+7));
return 0;
}
// This program demonstrates how to access characters in a string using pointer arithmetic.
// It initializes a string and prints specific characters by dereferencing pointers to the string's elements.
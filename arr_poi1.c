#include<stdio.h>
int main(){
       char * arr[4]={"c++","python","c","r"};
       int n = sizeof(arr)/sizeof(arr[0]);
       printf("Array elements:/n");
       for(int i=0;i<n;i++)
       {
        printf("%s \n",arr[i]);
       } 
return 0;
}
// This program demonstrates the use of an array of pointers to strings.
// It initializes an array of pointers to string literals and prints each string.

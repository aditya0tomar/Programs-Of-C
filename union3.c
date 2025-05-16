#include <stdio.h>
union abc
{
int a;
char b;
};
int main()
{
union abc *ptr; // pointer variable declaration
union abc var;
var.a= 90;
//#var.b= 50; //#if we add new value it overwrite old one
ptr = &var;
printf("The value of a is : %d", ptr->a);
return 0;
}
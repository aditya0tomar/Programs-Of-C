#include <stdio.h>
enum weekdays{Sunday=15, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
// if we give value to any day the next one will get+1 and depends upon its precider
int main()
{
enum weekdays w; // variable declaration of weekdays type
w=Monday; // assigning value of Monday to w.
printf("The value of w is %d",w);
return 0;
}
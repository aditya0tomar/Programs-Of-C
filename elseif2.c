#include<stdio.h>

int main () {
 int a;
 int b;
 printf("hey user please enter the valuemof a\n");
 scanf("%d",&a);
 printf("hey user please enter the valuemof b\n");
 scanf("%d",&b);
 if (a == b){printf("your both value are same\n");}
 else if(a > b){printf("a is greater than b\n");}
 else if(a < b){printf("b is greater than a\n");}
 else{printf("you have entered wrong choice");}
return 0;
}




/*#include<stdio.h>

int main () {
  int a;
  printf("hey user please enter the value of a :");
  scanf("%d",a);
  if (a/97==0){printf("your given value is divisble by 97");}
  else {printf("no your given valur is not divisble by 97");}
return 0;
}*/

/*#include<stdio.h>

int main () {
  int x=2,y=3,z=3,k=1;
  printf("solve of this %d",3*x/y-z+k);
return 0;
}*/
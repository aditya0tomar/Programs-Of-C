#include<stdio.h>
union emp {
    int a[7];
    char b;
    float c;

};

int main(){
  printf("the size of union emp is %d",sizeof(union emp));   
return 0;
}
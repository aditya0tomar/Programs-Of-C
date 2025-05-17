#include<stdio.h>

int main(){
    int day;
    printf("enter the no b/w 1-7 :");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default :
        printf("sorry the value you entersd is not valid/nPlease try again.");
        
    }
    return 0;
}
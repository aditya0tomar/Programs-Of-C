//gives address......


// #include <stdio.h>
// int main()
// {
//     int var=10;
//     int*ptr=&var;
//     printf("%d",ptr);
//     return 0;
// }


//gives value.........

// #include <stdio.h>
// int main()
// {
//     int var=10;
//     int*ptr=&var;
//     printf("%d",*ptr);
//     return 0;
// }

// the size of pointer depends upon the architecture on [64 bit>>8 bytes......32 bit>>4 bytes]size not on data type

//size of pointer 
#include<stdio.h>
int main(){
         int * ptr1;
         char * ptr2;
         printf("%zu\n",sizeof (ptr1));
         printf("%zu\n",sizeof (ptr2));
return 0;
}
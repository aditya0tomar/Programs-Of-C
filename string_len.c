// #include<stdio.h>
// #include<string.h>
// int main(){
//         char arr[500]="hello how are you"; 
//         int length=strlen(arr);
//         printf("The Length Of String is: %d\n",length);
// return 0;
// }

// >>>>for loop<<<<
// #include<stdio.h>
// int main(){
//        int i,count;
//        char str[50]="how are uu";
//        for (i=0;str[i]!='\0';i++)
//        {
//         count++;
//        }  
//        printf("%d",count);
// }


//copiying string value 1 in 2>>>>>
#include<stdio.h>
int main(){
       int i;
       char str1[50],str2[60];
       printf("enter string \n");
       scanf("%s",str1);
       for(i=0;str1[i]!='\0';i++)
       {
        str2[i]=str1[i];
       }
      
       printf(" the copied value from str1 is :%s",str2);
       return 0;
}
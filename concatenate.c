#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str1[50]="Ramesh",str2[60]="Singh";
    int j=strlen(str1);
    for(i=0;str2[i]!='\0';i++){
        str1[j]=str2[i];
        j=j+1;
    }
    printf("%s",str1);
}

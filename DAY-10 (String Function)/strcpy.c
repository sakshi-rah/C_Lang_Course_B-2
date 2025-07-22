#include<stdio.h>
#include<string.h>

int main(){
    // strcpy(str1,str2) = string copy

char str1[]= "Good_Evening";
char str2[20];

printf("str1: %s\n", str1); // str1: Good_Evening
printf("str2: %s\n", str2); // 

strcpy(str2, str1);
printf("Copied string is %s\n", str2);


return 0;
}
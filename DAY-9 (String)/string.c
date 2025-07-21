#include<stdio.h>
int main(){

// Array of Characters:
/* A string is essentially a sequence of individual char data types stored 
    contiguously in memory, just like any other array.
    * Null Termination:
    The crucial element that defines a C string is the null character (\0). 
    This special character signifies the end of the string.

    -for string we use %s.
*/

// Syntax of String:
char str1[20];
printf("Enter here str1 value: ");
scanf("%s", &str1);
printf("Str1 is : %s\n\n", str1);

char str2[100];
printf("Enter here str2 value: ");
scanf("%[^\n]s", &str2);
printf("String of str2: %s", str2);


char str[]={"hello class, i am good , how are you"}; // size= 5
printf("String: %s\n", str);

    return 0;
}
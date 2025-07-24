#include<stdio.h>
#include<string.h>

int main(){
// strlen() = find length of string
// strcat() = two string join
// strcpy() = one string copy in another string
// strcmp() = compare two string
// strlwr() = string lowercase
// strupr() = string uppercase
// strrev() = string reverse

// string length
char name[30];
printf("Enter Your Name: ");
scanf("%[^\n]s", &name);
printf("your name: %s\n", name);

int length = strlen(name);
printf("Length of String: %d\n", length );
printf("Length of name string: %d\n", strlen(name));


return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
// strlwr() and strupr() == tolower() and toupper() = ctype.h

char fullName[] = "ADWAIT Pimple";
strlwr(fullName);
printf("Full Name: %s\n", fullName);

char str1[] = "advance"; // ecnavda
strupr(str1);
printf("String: %s\n", str1);

// strrev() == string reverse
strrev(str1);
printf("Reverse String: %s\n", str1);



    return 0;
}
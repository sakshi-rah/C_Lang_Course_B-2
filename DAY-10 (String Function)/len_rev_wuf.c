#include<stdio.h>

int main(){
    // Find string length without using string handling function (for loop):
    char greeting[]="Good Evening! you are the best students";
    int length = 0;
    for(int i=0; greeting[i]!='\0'; i++){ // i=0, i=1
        length++; //
    }
    printf("Length of string is %d\n", length);

// Find string reverse without using string handling function (for loop):
    for(int i=length-1; i>=0; i--){ // good 
        printf("%c", greeting[i]);
    }
    return 0;
}
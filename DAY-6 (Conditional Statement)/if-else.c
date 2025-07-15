#include<stdio.h>

int main(){
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false

int num = 0;
// syntax of if
// if(condition){code}
if(num>0){ // true
    printf("Positive Number\n");
}else{
    printf("Negative Number\n"); // false
}

int evenNum = 20;
if(evenNum%2 == 0){  // false
    printf("Even Number\n");
}else{
    printf("Odd Number\n");
}

int a = 20;

if(a == 20){ // true
    printf("Both Number are equal\n"); 
}else{
    printf("Both Number are different"); 
}

    return 0;
}

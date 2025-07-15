#include<stdio.h>

int main(){
// Use if to specify a block of code to be executed, if a specified condition is true.
// Use else to specify a block of code to be executed, if the same condition is false.
// Use else if to specify a new condition to test, if the first condition is false.

// syntax of if else ladder
/* if(condition){
    //code
}else if (condition){
    // code
}else{
    // code
}
 */

int num = -75; // 1 = 0, 2 = 60, 3 = -75

if(num<0){ //0<0 = f // 60<0 = f // -75<0 = t
    printf("Negative Number\n");
}else if(num == 0){ // 0 == 0 = t // 60 == 0 = f
    printf("Number is Zero\n");
}else{
    printf("Positive Number\n");
}

int marks; // 60 = 3rd class, 80 = 2nd class, 90 = 1st class, other marks = fail
printf("Enter Marks\n");
scanf("%d", &marks);

if(marks >=90){ // 90 == 90 = t
    printf("Pass in 1st class\n");
}else if(marks == 80){ // 80 == 80 = t
    printf("Pass in 2nd class\n");
}else if(marks<= 35 ){
    printf("fail\n");
}else{
    printf("Fail\n");
}
    return 0;
}


//Today Home Work
// int x = 56;
/*if = 40=<x // Grade C
else if = 60=<x // Grade B
else if = 80<x // Grade A
else if =  100=<x // Good
else = 40>x // fail */
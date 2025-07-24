/* 2) while loop: Used when the number of iterations is not known.
//initialization;
while(condition) {
    // code to execute
    //increment;
} */

#include<stdio.h>

int main(){
// print 1 to 10 numbers
// int i=1;
// while(i<=10){
//     printf("Number: %d\n", i);
//     i++;
// }

//Print even and odd number using while loop = HW

// Taking Input from user
int j=1, n;
printf("Enter Number: ");
scanf("%d", &n);

while(j<=n){
printf("%d\n", j); // 1
j++;
}

    return 0;
}
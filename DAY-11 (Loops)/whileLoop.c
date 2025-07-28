/* 2) while loop: Used when the number of iterations is not known.
//initialization;
while(condition){
    // code to execute
    //increment;
} */

#include<stdio.h>

int main(){
// print 1 to 10 numbers
int i=1;
while(i<=10){
    printf("Number: %d\n", i);// 1, 2, 3, 4,5, 10
    i++; 
}

// Print reverse order number
int a=10;
while(a>=1){ // 10>=1 = t, 9>=1 = t, 1>=1=t, 0>=1=f
    printf("\n%d\n", a); // 10 9 .....1
    a--; // a=9 , a=8..... a=0
}

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
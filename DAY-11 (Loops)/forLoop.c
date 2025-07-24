/* Loops: In C programming, loops are used to execute a block of code repeatedly as 
long as a given condition is true. 

1) for loop: Used when the number of iterations is known.
for(initialization; condition; increment){
    // code to execute
}
*/

#include<stdio.h>

int main(){
    // print 1 to 100 numbers
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){ // i=1=t //i=2=t // i=3=t // i=4=f
        printf("i = %d\n", i);
    }
    printf("\n\n");

    // Even and Odd number
    for(int i=0; i<=10; i++){
        if(i%2==0)
        printf("Even: %d\n", i);
        else
        printf("Odd: %d\n", i);
    }
    printf("\n\n");

    // Using Continue Keyword = skip
    for(int i=1; i<=10; i++){ 
        if(i==3)
        continue;
        printf("i = %d\n", i);
    }
    return 0;
}
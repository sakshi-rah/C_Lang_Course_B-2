#include<stdio.h>

int main(){

    // Sum of Numbers from 1 to 10: 0+1+2+3+4+5+6+7+8+9+10 = 55
    int n, sum = 0; // 0+something= something => 0+8=8; 
    printf("Enter n value: ");
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++){ // 1<=10=t
        printf("%d ", i); // 1 2 3 4 5 6 7 8 9 10
        sum += i ;  // sum = sum+i // sum = 0+1=1 => sum=1; // 1+2=3 // sum = 55
    }
    
    printf("\nSum of Number is %d\n", sum);

    return 0;
}
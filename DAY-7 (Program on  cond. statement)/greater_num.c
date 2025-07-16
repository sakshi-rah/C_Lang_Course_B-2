#include<stdio.h>
int main(){
    //Find Greater Number of give two numbers
    int num1, num2;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2){ // 0>0 = t
        printf("Greater Number is %d", num1);
    }else{
        printf("Greater Number is %d", num2);
    }

    
    //Find Greater Number of give three numbers
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c) // 7>3 && 7>5 = t && t = t 2) 2>5 && 2>9 = f && f = f => b greater than a
        printf("Greater Number: %d\n", a); // a
    else if(b>c) // 5>9 = f
        printf("Greater Number: %d\n", b);
    else
        printf("Greater Number: %d\n", c); // c = 9
    


    return 0;
}

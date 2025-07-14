#include<stdio.h>
int main(){
    //  Conditional Operators or Ternary Operator(if-elase)
    // syntax = condition? expre1: expre2;
    int num = 57;
    (num % 2 == 0)? printf("Even\n"):printf("Odd\n");

    int a = 15, b = 25;
    int max = (a>b)? a : b;
    printf("Greater Number is %d\n", max); // b

    // Swapping Two Numbers using third variable
    printf("a = %d, b = %d\n", a, b);
    int temp; // null
    temp = a; // c = 15; a = null
    a = b; // a = 25; b= null
    b = temp; // b = 15; c= null
    printf("a = %d, b = %d\n", a, b);

    // Swapping Two Numbers without using third variable
    int x = 20, y = 30;
    x = x+y; // 20+30 = x = 50;
    y = x-y; // 50-30 = y = 20;
    x = x-y; // 50 -20 = x = 30;

    printf("X = %d Y = %d\n", x , y);
    return 0;
}
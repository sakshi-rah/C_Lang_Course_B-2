#include<stdio.h>

//  1. Arithmetic operators (+,-,*,/,%)
//  2. Increment Decrement Operators(++,--)
//  3. Assignment operators (=,+=,-=,*=,/=,%=)
//  4. Relational Operators (<,<=,>,>=,==,!=)
//  5. Logical operators (&&,||,!)

int main(){
    // Arithmetic Operators (+, -, *, /, %)
    int a = 20, b = 30;
    int sum = a + b; // a = variable/oprent , + = operator, b = variable/oprent
    printf("Sum of A and B is %d\n", sum ); // 50

    printf("a + b = %d\n", a+b); // a + b = 50
    printf("a - b = %d\n", a-b); // 20-30 = -10
    printf("a * b = %d\n", a*b); // 20*30 = 600
    printf("a / b = %d\n", a/b); // 20/30 = 0.65789 = 0
    printf("a %% b = %d\n", a%b); // 20%30 = 20
    

    

    return 0;
}
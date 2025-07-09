#include<stdio.h>

//  1. Arithmetic operators (+,-,*,/,%)
//  2. Increment Decrement Operators(++,--)
//  3. Assignment operators (=,+=,-=,*=,/=,%=)
//  4. Relational Operators (<,<=,>,>=,==,!=)
//  5. Logical operators (&&,||,!)

int main(){
    // Arithmetic Operators (+, -, *, /, %)
    /*int a = 20, b = 30;
    int sum = a + b; // a = variable/oprent , + = operator, b = variable/oprent
    printf("Sum of A and B is %d\n", sum ); // 50

    printf("a + b = %d\n", a+b); // a + b = 50
    printf("a - b = %d\n", a-b); // 20-30 = -10
    printf("a * b = %d\n", a*b); // 20*30 = 600
    printf("a / b = %d\n", a/b); // 20/30 = 0.65789 = 0
    printf("a %% b = %d\n", a%b); // 20%30 = 20
    */

    // increment and decrement operators (++, --) inc by 1 or dec by 1
    // pre inc = ++x or post inc = x++
    // pre dec = --x or post dec = x--

    int x = 3;
    printf("****** Inc/Dec Operators: *******\n");
    printf("x = %d\n", x); // x = 3
    // post inc & dec operators
    printf("x++ = %d\n", x++); // x++ = 3 //* post inc = print first current value = 5 then inc by 1 = 6
    printf("x = %d\n", x); // x = 4
    printf("x-- = %d\n", x--); // x-- = 4 //* post dec = print first current value = 6 then dec by 1 = 5
    printf("x = %d\n", x); // x = 3

    // pre inc dec operators
    printf("++x = %d\n", ++x); // ++x = 4// *pre inc & dec = first perform operation (inc and dec) and print. 
    printf("x = %d\n", x); // x = 4
    printf("--x = %d\n", --x); //  x = 3

    return 0;
}
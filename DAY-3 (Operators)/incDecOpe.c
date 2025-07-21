#include<stdio.h>

int main(){

    // increment and decrement operators (++, --) inc by 1 or dec by 1
    // pre inc = ++x or post inc = x++
    // pre dec = --x or post dec = x--

    int x = 3;
    printf("****** Inc/Dec Operators: *******\n");
    printf("x = %d\n", x); // x = 3
    // post inc & dec operators
    printf("x++ = %d\n", x++); // x++ = 3 //* post inc = print first current value = 3 then inc by 1 = 4
    printf("x = %d\n", x); // x = 4
    printf("x-- = %d\n", x--); // x-- = 4 //* post dec = print first current value = 4 then dec by 1 = 3
    printf("x = %d\n", x); // x = 3

    // pre inc dec operators
    printf("++x = %d\n", ++x); // ++x = 4// *pre inc & dec = first perform operation (inc and dec) and print. 
    printf("x = %d\n", x); // x = 4
    printf("--x = %d\n", --x); //  x = 3

    printf("\n\n\n");

    // other example of Inc and Dec operator
    int a = 6;
    printf("a is %d\n", a); // a is 6
    printf("++a value is %d\n", ++a); // ++a value is 7
    printf("--a value is %d\n", --a); // --a value is 6
    printf("a++ value is %d\n", a++); // a++ value is 6   //a=7
    printf("--a value is %d\n", --a); // --a value is 6   //a=6
    printf("a is %d\n", a); // a is 6

    return 0;
}
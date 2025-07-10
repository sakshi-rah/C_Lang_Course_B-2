#include<stdio.h>

int main(){

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
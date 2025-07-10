#include<stdio.h>

int main(){
    // Assignment Operators (=,+=,-=,*=,/=,%=)
    int z = 10;
    printf("_______Assignment Operators________\n");
    printf("Value of z is %d\n", z); // z=10
    z += 3; // z = z+3, 10+3 = 13;
    printf("z += 3 => z = %d\n", z); // z=13
    z -= 5; // z = z-5, 13-5 = 8
    printf("z -= 5 => z= %d\n", z); // z=8
    z *= 2; // z = z*2, 8*2 = 16
    printf("z *= 5 => z= %d\n", z); // z=16
    z /= 8; // z = z/8, 16/8 = 2
    printf("z *= 5 => z= %d\n", z); // z=2
    z %= 2; // z = z%2, 2%2 = 0
    printf("z *= 5 => z= %d\n", z); // z=0

    return 0;
}
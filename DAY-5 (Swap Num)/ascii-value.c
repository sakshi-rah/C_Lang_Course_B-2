#include<stdio.h>

void main(){
// ASCII Value (A to Z OR a to z) keyboards = 127
// A = 65; a = 97; // 32
// a = 97-32 = 65 = A
// b = 98 - 32 = 66 = B 
// 32 = space, 33 = !

char character = 'A';
printf("ASCII Value of A is %d\n", character);

char character1 = 'a';
printf("ASCII Value of a is %d\n", character1);

char character2 = 'S';
printf("ASCII Value of S is %d\n", character2);

char character3 = 'p';
printf("ASCII Value of p is %d\n", character3);

char character4 = 'Z';
printf("ASCII Value of Z is %d\n", character4);

char character5 = 'z';
printf("ASCII Value of z is %d\n", character5);


int num = 75;
printf("ASCII Value of num is %c", num);
}
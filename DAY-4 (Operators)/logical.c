#include<stdio.h>
int main(){
    // Logical operators (&&,||,!)
    // && = and = 1 1 = 1, 0 1= 0, 1 0 = 0, 0 0 = 0; (both conditions are true)
    // || = or = 1 1 = 1, 0 1 = 1, 1 0 = 1, 0 0 = 0; (any one condition is true)
    // ! = not =  1 = 0, 0 = 1

    int m = 1 , n = 0; 
    printf("_______Logical Operators_______\n");
    printf("m && n = %d\n", m&&n); // 1&&0 = 0;
    printf("m || n = %d\n", m||n); // 1||0 = 1;
    printf("!m = %d\n", !m); // m=1 => m=0;
    printf("!n = %d\n", !n); // n=1;

    printf("\n_______Another Example of Logical Operators_______\n");
    int r = 0, s = 0;
    printf("r && s = %d\n", r&&s); // 0
    printf("r || s = %d\n", r||s); // 0
    printf("!r = %d\n", !r); // 1
    printf("!s = %d\n", !s); // 1



    return 0;
}
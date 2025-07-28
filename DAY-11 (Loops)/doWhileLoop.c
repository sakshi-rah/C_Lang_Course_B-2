/* 3) do...while loop: Executes the block at least once, then checks the condition.
do{
    // code to execute
    // ince or dec;
}while(condition);
*/

#include<stdio.h>

int main(){

    int i=1;
    do{
        printf("i=%d, ", i); // i=1, i=2, 
        i++; // i=3
    }while(i<=10);// 1<=10= t, 2<=10, 11<=10=f

    return 0;
}
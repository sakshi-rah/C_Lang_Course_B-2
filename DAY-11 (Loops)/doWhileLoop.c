/* 3) do...while loop: Executes the block at least once, then checks the condition.
do{
    // code to execute
} while (condition);
*/

#include<stdio.h>

int main(){

    int i=1;
    do{
        printf("i=%d, ", i); // i=1,
        i++; // i=2
    }while(i<=10);

    return 0;
}
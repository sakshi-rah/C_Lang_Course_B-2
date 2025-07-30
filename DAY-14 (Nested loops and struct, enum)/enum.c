#include<stdio.h>
// Syntax of Enum: enum keyword 
// enum variable_name{value1, value2, value3....};
// Enum: Groups name constants(integers)

enum Day {SUN, MON, TUE, WED, THUR, FRI, SAT};
enum Signal {RED, YELLOW, GREEN};


int main(){

    enum Day today = WED;
    printf("Today is %d\n", today ); // Today is 3

    enum Signal s = YELLOW;

    if(s==GREEN)
    printf("Go!\n");
    else if(s==YELLOW)
    printf("Wait!\n");
    else
    printf("Stop!\n");


    return 0;
}
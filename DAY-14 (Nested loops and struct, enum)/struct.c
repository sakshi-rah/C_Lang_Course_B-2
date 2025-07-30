#include<stdio.h>
// Structure in C Programming using struct keyword
// predef data_type: int, float, char, double
// user def data_type: structure

/* Syntax :
struct student{
    int roll_no;
    char name[30];
    float mark;
};
*/

// Example of Structure:
struct student{
    int roll_no; // 4byte
    char name[30]; // 1byte
    float mark; // 4byte total= 9byte
};
// in case union= 1= 4byte, 2= 1byte, 3= 4byte, total = 4byte (only largest size of variable)
void main(){

struct student std= {01, "Prajakta Baghele", 99.90};
printf("********Student Details**********\n");

printf("Student Roll No: %d\n", std.roll_no); // 01
printf("Student Name: %s\n", std.name);
printf("Student Mark: %.2f", std.mark);

}
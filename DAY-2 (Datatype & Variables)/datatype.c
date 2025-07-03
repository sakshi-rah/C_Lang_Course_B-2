// datatype (4)
/*
1) int = interger value = a = 34;
2) float = decimal value = b = 45.67;
3) char = charecter = c = 'A';
4) double = large number of decimal value = d = 4567.678943256;
*/

// datatype formate specifiers:
/*
1) int = "%d";
2) float = "%f";
3) char = "%c", string = "%s"
4) double = "%lf", "%.2f"
*/

// Rules of declaration of variables
/*
datatype variable_name = 566; // asg.
int num = r
roll_num = r
table_num_1 = r
2num = w
roll number = w
student-name = w
float int; w
*/

#include<stdio.h>

int main(){

    // int num = 7;
    // int stdName ; 
    // float per = 99.99;
    // char N = 'A';
    // double area = 456.5678943312;

    // printf("Number: %d\n", num); // Number: 7
    // printf("Number Per: %.2f\n", per); // Number Per: 99.99
    // printf("Name: %c\n", N); // Name: A
    // printf("Area: %.2f", area);


    int number; // variable declare
    printf("Enter your Number: ");
    scanf("%d", &number);
    printf("Number: %d\n", number);

    float per; // variable declare
    printf("Enter your percentage: ");
    scanf("%f", &per);
    printf("Number: %.2f", per);

    return 0;
}
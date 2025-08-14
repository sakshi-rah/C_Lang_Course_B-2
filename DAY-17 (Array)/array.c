#include<stdio.h>
/* An array is a collection of variables of the same data type stored in contiguous memory 
    locations. It allows you to store and access multiple values using a single variable name 
    with an index.
    indexing started from 0;
*/
    // Syntax of Array in C.
    //data_type array_name[size];

int main(){
    //int arr[3];
    /*int array[] = {10, 20, 30, 40, 50};

    printf("The first element of array is %d\n", array[0]);
    printf("The second element of array is %d\n", array[1]);
    printf("The third element of array is %d\n", array[2]);
    printf("The fourth element of array is %d\n", array[3]);
    printf("The fifeth lement of array is %d\n", array[4]);
*/

    // for(int i=0; i<5; i++){
    //     printf("Array Element[%d]: %d\n", i, array[i]);
    // }

    printf("-----------------Getting array elements from user------------------\n");
    int marks[6], sum=0;
    float avg;

    printf("Enter 6 subject marks: ");
    for(int i=0; i<6; i++){
        scanf("%d", &marks[i]);
    }

    printf("**********Your Array Elements**********\n");
    
    for(int i=0; i<6; i++){
        printf("Array Element[%d]: %d\n", i, marks[i]);
        sum += marks[i]; // sum = sum+i  // sum = 0+10 =10+9
        avg = sum/6.0;
    }

    printf("Sum of Array Element is %d\n", sum);
    printf("Avg of Array Element is %.2f\n", avg);

    return 0;
}
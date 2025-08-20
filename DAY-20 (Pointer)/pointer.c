#include<stdio.h>

int main(){
    /* 
        *variable_name = for create pointer , &variable_name = for denoted address.
        A pointer is a variable that stores the address of another variable.
        data_type *variable_name;
        int *ptr; 
    */

    int a=50;
    int *ptr;
    ptr = &a; //add of a variable address

    int b=60;
    int *aPtr;
    aPtr= &b;

    printf("Value of a: %d\n", a); // 50
    printf("Address of a: %p\n", &a); // 0061FF18
    printf("Value stored in ptr: %p\n", ptr); // 0061FF18
    printf("Value of ptr is %d\n\n", *ptr);// 50
    printf("Address of a: %p\n", &a); // 0061FF18


    // printf("Value of a: %d\n", b); // 50
    // printf("Address of a: %p\n", &b); // 0061FF18
    // printf("Value stored in ptr: %p\n", aPtr); // 0061FF18
    // printf("Value of ptr is %d\n\n", *aPtr);// 50

    // // Changing Value Using Pointer:
    // int x = 10;
    // int *p = &x;
    // printf("Value of X: %d\n", x); // x=10;
    // printf("value od p: %d\n", *p); // *p=10

    // *p = 25;

    // printf("\nAddress of X: %p\n", &x);
    // printf("Value of X: %d\n", x); // x=25
    // printf("value od p: %d\n\n", *p); // *p=25


    // // Pointer in Array:
    // int arr[3] = {20, 40, 60};
    // int *arrPtr = arr; //&arr[0], &arr[1], &arr[2]

    // for(int i=0; i<3; i++){
    //     printf("Value at arr[%d] = %d\n", i, *(arrPtr+i));
    // }
    return 0;
}
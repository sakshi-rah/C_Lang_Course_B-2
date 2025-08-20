#include<stdio.h>
// Pointer in Function
void updValue(int *n){
    *n = *n+5; // n=2 => *n = 2+5; = 7
}

// int main(){
//     int num = 2;
//     updValue(&num);
//     printf("Updated value: %d\n", num);
//     return 0;
// }

// Another Example:

void subPtr(int *p){
    *p = *p-25 ;
}

// int main(){

//     int sub = 270;
//     subPtr(&sub);
//     printf("Pointer Function value is %d\n", sub);
//     return 0;
// }


// Swapping Numbers :

int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int x = 10, y = 20;
    swap(&x, &y);
    printf("After Swapping Value of x and y is x = %d, y = %d.\n", x, y);
    return 0;
}
#include<stdio.h>

int main(){
// Nested While Loop
int i=1;
while(i<=5){
    int j=1;
    while(j<=9){
        printf("%d ", j);
        j++;
    }
    printf("\n");
    i++;    
}

printf("\n\n\n");

// Nested Do while loop
int a = 1;
do{
    int b = 1;
    do{
        printf("# ");
        b++;
    }while(b<=a); // row=1, #=1 , row=2, #=2

    printf("\n");
    a++;
}while(a<=5);

    return 0;
}
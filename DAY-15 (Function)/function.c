#include<stdio.h>
/* User Defined Function
* Syntax of Function 
    return_type function_name(Aug list){ // Outside of the main function
    code ; // int, void
    } 
    call the function:
    function_name(aug list); => in main function

** Category of user defined function:
void = no return value
(aug list) = aug

1.Function with no aug and no return value
2.Function with aug and no return value
3.Function with no aug and return value
4.Function with aug and return value
*/

/* Predefined Function
printf(), scanf(), strlen()
*/

// 1. Function with no aug and no return value

/*void demo(){
    printf("Hello! Welcome Back\n");
    printf("Thank You!\n");
}

int main(){
    demo(); // Function call
    demo();
    return 0;
}*/

// 2. Function with aug and no return value

/* void sum(int a, int b){
    int sum = a+b; // 5+8=13
    printf("Sum = %d\n", sum);
}

int main(){
    sum(5, 8); // a=5, b=8
    sum(14, 56);
    return 0;
}*/

// 3. Function with no aug and return value

/* int getNum(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    return num; // 5
}
int main(){
    int value = getNum();
    printf("your Number is %d\n", value);
    return 0;
}*/

// 4. Function with aug and return value

int multiNum(int x, int y){
    // int multi = x*y;
    return x*y;
}

int main(){
    int result = multiNum(24, 7); // 168
    int anResult = multiNum(56,6); // 336
    printf("Multiply of X & Y is %d\n", result);
    printf("Multiply of X & Y is %d\n", anResult);

    return 0;
}
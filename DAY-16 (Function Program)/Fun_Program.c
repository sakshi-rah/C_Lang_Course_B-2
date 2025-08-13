#include<stdio.h>
//1. Add two numbers using function(getting input from user)

int add(int p, int q){ // pass parameters
    return p-q; 
    return p+q;// 15+25 = 40;
}

int main(){

    int num1, num2, result;
    printf("Enter first No.: ");
    scanf("%d", &num1); // num1=15

    printf("Enter Second No.: ");
    scanf("%d", &num2); // num2= 25

    result = add(num1, num2); // pass arguments
    printf("Sum of two numbers: %d\n", result);
    return 0;
}

//2. Check whether a number is prime or not using function:

int isPrime(int num){
    if(num<=1) return 0; // not prime
    for(int i=2; i<=num/2; i++){ // num=4
        if(num%i==0) //2%2==0
        return 0; // not prime
    }
    return 1; // prime
}

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    // Function call for prime number as well as not a prime number.
    if(isPrime(number)){
        printf("%d is a Prime Number!");
    }else{
        printf("%d is not a Prime Number!");
    }

    return 0;
}

//3. Factorial Number: 5 = 5*4*3*2*1 = 120

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){ // 5
        fact *= i; //fact = fact*i; // 1*2*3*4*5 = 24
    }
    return fact;
}
int main(){

    int value =  factorial(9);
    printf("Factorial Number: %d\n", value);
    return 0;

}

//4. Check Number Even or Odd:

void checkEvenOdd(int n){
    if(n%2==0)
    printf("%d is Even Number\n", n);
    else
    printf("%d is Odd Number\n", n);
}

int main(){
    checkEvenOdd(34);
    return 0;
}
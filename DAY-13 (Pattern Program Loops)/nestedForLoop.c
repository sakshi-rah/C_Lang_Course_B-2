#include<stdio.h>
// Nested For Looop: loop in loop

int main(){
printf("Right-Angle Triangle Star pattern program: \n");
int i, j; // row = i, col= j
for(i=1; i<=5; i++){  // t // i=2
    for(j=1; j<=i; j++){ // i=1, j=1 = t // j=2// i=2
        printf("* ");
    }
    printf("\n");
}

/*
Outer loop (i) runs from 1 to 5 → control number of rows.
Inner loop (j) runs from 1 to i → control number of * printed in each row.
So row 1 has 1 star, row 2 has 2, ..., row 5 has 5.

* 
* * 
* * *
* * * *
* * * * * 

*/

printf("\nRight-Angle Triangle in Number pattern program: \n");
int r, s;
for(r=1; r<=5; r++){ // r=2 = t
    for(s=1; s<=r; s++){ // r=2, s=1=>t // s=2, s=3
        printf("%d ", s); // s=1 // 1 2 
    }
    printf("\n");
}

/*
Similar structure to the star triangle.
But instead of printing "s ", it prints the value of s.
So each row prints increasing numbers starting from 1.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/

printf("\nReverse Right-Angle Triangle Star pattern program: \n");
int p, q;
for(p=5; p>=1; p--){
    for(q=1; q<=p; q++){
        printf("* ");
    }
    printf("\n");
}

/*
Outer loop starts from 5 and decreases to 1.
Inner loop prints * up to the value of p.
So row 1 has 5 stars, row 2 has 4, ..., row 5 has 1.
* * * * * 
* * * *
* * *
* *
*

*/

printf("\nReverse Right-Angle Triangle in Number pattern program: \n");
int a, b;
for(a=5; a>=1; a--){
    for(b=1; b<=a; b++){
        printf("%d ", b);
    }
    printf("\n");
}

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

printf("\nSquare Star pattern program: \n");

int x, y; // row = i, col= j
for(x=1; x<=5; x++){  // t // i=2
    for(y=1; y<=5; y++){ // i=1, j=1 = t // j=2// i=2
        printf("* ");
    }
    printf("\n");
}
/*

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/
return 0;
}
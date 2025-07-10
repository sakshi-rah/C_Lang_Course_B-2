#include<stdio.h>
int main(){
    // Relational Operators (<,<=,>,>=,==,!=)
    // T = 1, F = 0

    int p = 5, q = 10;
    printf("_______Relational Operators_______\n");
    int r = p<q; // 1
    printf("p < q: %d\n", r); // r = 1
    printf("p <= q: %d\n", p<=q); // 1
    printf("p > q: %d\n", p>q); // 0
    printf("p >= q: %d\n", p>=q); // 0
    printf("p == q: %d\n", p==q); // 0
    printf("p != q: %d\n", p!=q); // 1

    printf("\n_______Another Example of Relational Operators_______\n");
    int a = 20, b = 40;
    printf("a < b: %d\n", a<b); // 1
    printf("a <= b: %d\n", a<=b); // 1
    printf("a == b: %d\n", a==b); // 0
    printf("a >= b: %d\n", a>=b); // 0
    printf("a > b: %d\n", a>b); // 0
    printf("a != b: %d\n", a!=b); // 1

    return 0;
}
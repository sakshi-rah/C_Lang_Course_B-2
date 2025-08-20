#include<stdio.h>
// String in Pointer:
int main(){
    char *str = "I Miss You My Batch-2 Students!";
    printf("String: %s\n", str);

    while(*str != '\0'){
        printf("%c ", *str);
        str++;
    }

    // 
    return 0;
}
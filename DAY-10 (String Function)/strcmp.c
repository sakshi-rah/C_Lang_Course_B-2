#include<stdio.h>
#include<string.h>

int main(){

    // strcmp(1, 2)= string compare

    char color1[] = "White";
    char color2[] = "White";

    if(strcmp(color1,color2)==0){
        printf("Colors are Same\n");
    }else{
        printf("Colors are not Same");
    }


    char name1[] = "Dipti";
    char name2[] = "Arya";

    if(strcmp(name1, name2) == 0){
        printf("Both name are same");
    }else{
        printf("Both name are different");
    }

    return 0;
}
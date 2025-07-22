#include<stdio.h>
#include<string.h>

int main(){
// 1. strcat() = two string join or Concatenate

char name[]= "Komal";
char surname[20]= "Borghare ";

printf("Name: %s\n", name); // Name: Komal
printf("Surname: %s\n", surname); // Surname: Borghare

// strcat(name,surname);
// printf("Concatenated String: %s\n", name);

// 2. strcat()
strcat(surname, name);
printf("Concatenated String: %s\n", surname); 

    return 0;
}
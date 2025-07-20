#include<stdio.h>
int main(){
// Switch Case Syntax
/*
switch(expression/value){
    case value1: statement
    break;
    case value2: statement
    break;
    case value2: statement
    break;
    default: statement
    break;
}
*/  

// Mini Calculator Using Switch Case.
// int value1, value2 ; // value1 + value2
// char ch;
// printf("Enter value1 & value2: ");
// scanf("%d %d", &value1, &value2);

// printf("Enter operators(+,-,*,/, %):");
// scanf(" %c", &ch);

// switch(ch){
//     case '+': printf("Sum of value1 and value2: %d\n", value1 + value2);
//     break; // imp
//     case '-': printf("Sub of value1 and value2: %d\n", value1 - value2);
//     break; // imp
//     case '*': printf("Multi of value1 and value2: %d\n", value1 * value2);
//     break; // imp
//     case '/': printf("Div of value1 and value2: %d\n", value1 / value2);
//     break; // imp
//     case '%': printf("Mod of value1 and value2: %d\n", value1 % value2);
//     break; // imp
//     default: printf("Invalid Operation");
// } 

// Week Days
// int day;
// printf("Enter Day: ");
// scanf(" %d", &day);

// switch(day){
//     case 1: printf("Sunday");
//     break;
//     case 2: printf("Monday");
//     break;
//     case 3: printf("Tuesday");
//     break;
//     case 4: printf("Wednesday");
//     break;
//     case 5: printf("Thursday");
//     break;
//     case 6: printf("Friday");
//     break;
//     case 7: printf("Saturday");
//     break;
//     default: printf("Invalid day number");
// }


// switch case another example:

int colorNo;
printf("Enter your color no.: ");
scanf("%d", &colorNo);

switch(colorNo){
    case 1: printf("1: Pink");
    break;
    case 2: printf("2: Black");
    break;
    case 3: printf("3: Blue");
    break;
    case 4: printf("4: Brown");
    break;
    default: printf("Invalid color number");
}

    return 0;
}
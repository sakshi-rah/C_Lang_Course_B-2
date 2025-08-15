#include <stdio.h>
int main()
{

    // Print Reverse Array Elements
    int arr[] = {25, 15, 30, 5, 45, 12};
    // printf("Reverse Array Elements: ");
    // for(int i=5; i>=0; i--){
    //     printf("%d ", arr[i]);
    // }

    // Print Reverse Array Elements size taking from user
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int arrEle[n];
    printf("Enter Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrEle[i]);
    }

    printf("Reverse Order Array: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arrEle[i]);
    }

    return 0;
}
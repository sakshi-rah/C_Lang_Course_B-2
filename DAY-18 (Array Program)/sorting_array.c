#include <stdio.h>
int main()
{

    // int arr[] = {45, 89, 90, 65, 37}; // unsorted array
    // int temp;

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1]) // t
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    
    // printf("Sorted Array in ascending order: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

// Desending order: 
int arr[] = {45, 89, 90, 65, 37};

    for (int i = 0; i < 5; i++)   
    {
        for (int j = 0; j < 5-i; j++)   
        {
            if (arr[j] < arr[j + 1]) 
            {
            int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array in descending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
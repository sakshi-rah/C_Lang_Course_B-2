#include <stdio.h>
int main()
{

    int arr[] = {130, 1540, 30, 20, 450};
    // initial level consider as a normal value(arr[0])
    // Minimum Number
    int min = arr[0]; // 25=> 15 => 5
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        { // arr[0]<arr[0]=F, arr[1]<25=>15<25=T, arr[2]<15=>30<15=F,
            // arr[3]<15=>5<15=T, arr[4]<5=> 45<5=F
            min = arr[i]; // 15=> 5
        }
    }
    printf("Minimum Number is %d\n", min);

    // Maximum Number
    int max = arr[0]; // 25=> 15 => 5
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // 15=> 5
        }
    }
    printf("Maximum Number is %d\n", max);
    return 0;
}
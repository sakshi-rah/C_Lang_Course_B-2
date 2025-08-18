#include<stdio.h>

int main(){

/* int arr[] = {23, 45, 78, 78};
    int arr1[2][3] = {
        {1, 2, 3}, {4, 5, 6}// 1 2 3
                            // 4 5 6
    };

    // Print array elements:
    printf("2D Array Elements: \n");
    for(int i=0; i<2; i++){
        // Row
        for(int j=0; j<3; j++){
            // Columns
            printf("%d ", arr1[i][j]);
        }
    printf("\n");
    }
*/


// Students Marks Store Program 

int marks[5][6]= {
{9,9,8,19,19,18}, 
{9,7,10,11,8,16}, 
{8,7,8,17,17,20}, 
{9,20,20,9,18,8}, 
{17,16,9,5,19,10}
};

// print marks of each students:
printf("Students Marks (5 Students, 6 Subjects): \n");
for(int i=0; i<5; i++){
    printf("Students %d: ", i+1); // i = 0 i+1= 0+1=1
    for(int j=0; j<6; j++){
        printf("%d ", marks[i][j]);
    }
    printf("\n");
}

// Calculate Average marks of each students
printf("\nAverage Marks:\n");
for(int i=0; i<5; i++){
    int sum = 0;
    for(int j=0; j<6; j++){
        sum += marks[i][j];
    }
    printf("Student %d Average = %.2f\n", i+1, sum/6.0);
}
    return 0;
}
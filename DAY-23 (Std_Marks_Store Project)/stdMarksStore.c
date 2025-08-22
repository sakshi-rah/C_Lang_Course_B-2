// Students Marks Stored Project as well as Find Grade!

#include <stdio.h>

// Structure to store student details:
struct Student
{
    char name[30];
    int roll;
    float marks[4];
    float total;
    float percentage;
};

// Taking input from student using user-defined function:
void inputStudent(struct Student *s)
{
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", s->name); // Notice space before %[^\n] to avoid newline issue 
    // Structure Object Name -> variable name

    printf("Enter Student Roll Number: ");
    scanf("%d", &s->roll);

    s->total = 0;

    // Getting Array Elements:
    printf("Enter Student Marks of 4 Subjects: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }

    // percentage = (total_obtained / total_max) * 100
    s->percentage = (s->total / 4.0) * 100;
}

// Display Student Details:
void displayStudent(struct Student s)
{
    printf("\n----** Student Result Display **----\n");

    printf("Student Name: %s\n", s.name);
    printf("Student Roll Number: %d\n", s.roll);
    for (int i = 0; i < 4; i++)
    {
        printf("Marks in Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    printf("Total Marks: %.2f / 400\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage); //we use here %% for Print "%" Symbol.

    // Find Student Grade based on Percentage:
    if (s.percentage >= 90)
        printf("Grade: A\n");
    else if (s.percentage >= 75)
        printf("Grade: B\n");
    else if (s.percentage >= 60)
        printf("Grade: C\n");
    else if (s.percentage >= 35)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");
}

int main()
{
    struct Student std;
    printf("******* Student Result System *******\n");
    inputStudent(&std);
    displayStudent(std);

    return 0;
}
//6. Relational and Logical Operators Write a C program to input marks of a student in three subjects. Use relational and logical operators to check whether the student:   Passed all subjects  Failed in one or more subjects  Scored distinction if average is 75 or above Assume passing marks in each subject is 40.
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float average;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    average = (sub1 + sub2 + sub3) / 3.0;
    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40)
    {
        printf("Student passed all subjects\n");
        if (average >= 75)
        {
            printf("Student scored distinction\n");
        }
    }
    else
    {
        printf("Student failed in one or more subjects\n");
    }
    return 0;
}
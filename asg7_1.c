//1.	Array Traversal, Sum, and Average
//Write a C program to input n elements into a one-dimensional array. Display all the elements of the array and calculate and display their sum and average.
#include <stdio.h>
int main()
{
    int n, i;
    float sum=0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
        sum=sum + A[i];
    }
    average = sum / n;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
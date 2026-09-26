//2.	Search an element in an Array
//Write a C program to search for a given element in an array. Display all its positions and total number of occurrences. If it is not found, display an appropriate message.
#include <stdio.h>
int main()
{
    int i, n, data, c = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Enter the element to be found: ");
    scanf("%d", &data);
    for (i = 0; i < n; i++)
    {
        if (A[i] == data)
        {
            printf("Element is found at %d\n", i + 1);
            c++;
        }
    }
    
    return 0;
}
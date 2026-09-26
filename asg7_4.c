#include <stdio.h>
int main()
{
    int n, i, p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the position of the element that has to be deleted");
    scanf("%d", &p);
    for (i= p-1 ; i< n-1; i++)
    {
        A[i] = A[i+1];

    }
    n--;
    printf("The new array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
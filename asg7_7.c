//7.	Sorting an Array
//Write a C program to input n elements into an array and arrange them in ascending order. Display the array before and after sorting.
#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array before sorting:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Sorting in ascending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nArray after sorting:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

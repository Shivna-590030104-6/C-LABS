#include <stdio.h>

int main()
{
    int n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    // Check if position is valid
    if(position < 1 || position > n + 1)
    {
        printf("Invalid position.");
    }
    else
    {
        // Shift elements to the right
        for(i = n; i >= position; i--)
        {
            a[i] = a[i - 1];
        }

        // Insert the new element
        a[position - 1] = element;

        n++;

        printf("Updated array:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
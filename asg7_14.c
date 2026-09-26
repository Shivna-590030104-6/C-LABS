#include <stdio.h>

int main()
{
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sums
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // Main diagonal
            if(i == j)
            {
                mainSum = mainSum + a[i][j];
            }

            // Secondary diagonal
            if(i + j == n - 1)
            {
                secondarySum = secondarySum + a[i][j];
            }

            // Check upper triangular
            if(i > j && a[i][j] != 0)
            {
                upper = 0;
            }

            // Check lower triangular
            if(i < j && a[i][j] != 0)
            {
                lower = 0;
            }
        }
    }

    // Diagonal matrix
    if(upper == 1 && lower == 1)
    {
        diagonal = 1;
    }
    else
    {
        diagonal = 0;
    }

    printf("\nSum of main diagonal = %d", mainSum);
    printf("\nSum of secondary diagonal = %d", secondarySum);

    if(diagonal == 1)
    {
        printf("\nThe matrix is a diagonal matrix.");
    }
    else if(upper == 1)
    {
        printf("\nThe matrix is an upper triangular matrix.");
    }
    else if(lower == 1)
    {
        printf("\nThe matrix is a lower triangular matrix.");
    }
    else
    {
        printf("\nThe matrix is none of these.");
    }

    return 0;
}
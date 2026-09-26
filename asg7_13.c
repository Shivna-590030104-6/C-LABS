#include <stdio.h>

int main()
{
    int n, i, j;
    int symmetric = 1, skew = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int a[n][n], transpose[n][n];

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    // Display transpose
    printf("\nTranspose of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -transpose[i][j])
            {
                skew = 0;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("\nThe matrix is symmetric.\n");
    }
    else if(skew == 1)
    {
        printf("\nThe matrix is skew-symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}
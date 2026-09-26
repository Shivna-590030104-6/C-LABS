#include <stdio.h>

int main()
{
    int m, n, i, j;
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise sum
    printf("Row-wise sums:\n");

    for(i = 0; i < m; i++)
    {
        rowSum = 0;

        for(j = 0; j < n; j++)
        {
            rowSum = rowSum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // Column-wise sum
    printf("Column-wise sums:\n");

    for(j = 0; j < n; j++)
    {
        colSum = 0;

        for(i = 0; i < m; i++)
        {
            colSum = colSum + a[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
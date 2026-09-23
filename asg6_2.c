//2.	Fibonacci Sequence
//Write a C program to input the number of terms and display the Fibonacci sequence using a loop.
#include <stdio.h>
int main()
{
    int a=0, b=1, c, i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: %d %d ", a, b);
    for(i=2; i<n; i++)
    {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
    return 0;
}
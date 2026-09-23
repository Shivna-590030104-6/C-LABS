#include <stdio.h>
int main()
{
    int n, palindrome;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n>0)
    {
        palindrome = n%10;
        printf("%d", palindrome);
        n=n/10;
    }
    if (n==palindrome)
    {
        printf("The number is a palindrome no.");

    }
else
{
    printf("The number is not a palindrome no.");
    }
    return 0;
}
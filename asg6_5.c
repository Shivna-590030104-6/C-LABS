#include <stdio.h>
int main()
{
    int n, i;
     printf("Enter a number");
     scanf("%d", &n);

     if (n < 2)
     {
         printf("invalid input");}
     else
         {for (i = 2; i <= n/2; i++)
             if (n % i == 0)
             {
                 printf("n is not a prime number");

                  }

     else
         {printf("n is not a prime number");}
                }
return 0;
    }
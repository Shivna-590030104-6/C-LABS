#include <stdio.h>
int main()
{
int i=1, sum=0, n;
printf("Enter a positive integer: ");
scanf("%d", &n);

for (i=1; i<=n/2; i++);
{
if (n%i==0)
{
sum=sum+i;
}
}
if(sum==n)
{
printf("The no. is a perfect no.");
}
else
{ printf("The no. is not perfect");
}
return 0;
}


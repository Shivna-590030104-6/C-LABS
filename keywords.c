//Keywords Identification Write a C program that uses at least 5 C keywords meaningfully. After writing the program, list the keywords used and explain their purpose  briefly. 
#include <stdio.h>
#include <math.h>
int main()

{
    int a,b,c;
    float discriminant, root1, root2;
    printf("Enter the coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==0)
    {
        printf("Invalid input");
    }
    else 
    {
        discriminant = (b*b - 4*a*c);
        if (discriminant>0)
        {
            printf("Roots are real and distinct");
            root1= -b + sqrt(discriminant) / (2*a);
            root2= -b - sqrt(discriminant) / (2*a);
            printf("Root: %.2f\n", root1);
            printf("Root: %.2f\n", root2);
        }
        else if (discriminant==0)
        {
            printf("Roots are real and equal");
            root1= -b / (2*a);
            printf("Root: %.2f\n", root1);
        }
        else if (discriminant<0)
        {
            printf("Roots are imaginary");
        }
    }
    return 0;
}
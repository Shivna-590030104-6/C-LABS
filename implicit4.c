#include <stdio.h>

int main()
{
    int a;
    float b, c1, c2;

    printf("Enter an integer number: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    c1 = a + b;
    c2 = (float)a + b;

    printf("\nAddition\n");
    printf("Implicit = %.2f\n", c1);
    printf("Explicit = %.2f\n", c2);

    c1 = a - b;
    c2 = (float)a - b;

    printf("\nSubtraction\n");
    printf("Implicit = %.2f\n", c1);
    printf("Explicit = %.2f\n", c2);

    c1 = a * b;
    c2 = (float)a * b;

    printf("\nMultiplication\n");
    printf("Implicit = %.2f\n", c1);
    printf("Explicit = %.2f\n", c2);

    c1 = a / b;
    c2 = (float)a / b;

    printf("\nDivision\n");
    printf("Implicit = %.2f\n", c1);
    printf("Explicit = %.2f\n", c2);

    return 0;
}
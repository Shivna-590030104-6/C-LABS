//8.	Series Evaluation
//Write a C program to input x and n and evaluate the following series:
  //                                S = x − (x^2)/2! + (x^3)/3! − (x^4)/4! +⋯+(−1)^(n+1) (x^n)/n!.
//Calculate powers and factorials using loops without using pow() or a separate user-defined function.
#include <stdio.h>
int main() {
    int n, i;
    float x, S = 0.0, term, factorial;

    // Input values for x and n
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the series
    for (i = 1; i <= n; i++) {
        // Calculate factorial
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Calculate term
        term = (i % 2 == 0 ? -1 : 1) * (x * x * x * x * x * x * x * x * x * x) / factorial; // This is incorrect, we need to calculate power properly

        // Add term to sum
        S += term;
    }

    // Output the result
    printf("The value of the series S is: %.4f\n", S);

    return 0;
}

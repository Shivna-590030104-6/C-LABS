//7.	Decimal-to-Binary Conversion
//Write a C program to input a positive decimal integer and convert it into binary using a loop. Do not use arrays, strings, or library conversion functions.
#include <stdio.h>
int main() {
    int decimal, binary = 0, remainder, base = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary representation: %d\n", binary);
    return 0;
}
//7. Increment and Decrement Operators Write a C program to demonstrate the difference between: ++a, a++, --a, a-- Use suitable values and print the result after each operation. 
#include <stdio.h>
int main()

{
    int a=5;
    printf("Initial value of a: %d\n", a);
    
    printf("Using pre-increment (++a): %d\n", ++a); // Increment first, then use the value
    printf("Value of a after pre-increment: %d\n", a);
    
    printf("Using post-increment (a++): %d\n", a++); // Use the value first, then increment
    printf("Value of a after post-increment: %d\n", a);
    
    printf("Using pre-decrement (--a): %d\n", --a); // Decrement first, then use the value
    printf("Value of a after pre-decrement: %d\n", a);
    
    printf("Using post-decrement (a--): %d\n", a--); // Use the value first, then decrement
    printf("Value of a after post-decrement: %d\n", a);
    
    return 0;
}
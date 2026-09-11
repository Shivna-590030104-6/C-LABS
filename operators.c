//Arithmetic and Mathematical Operators Using Header File Write a C program to input two numbers and perform the following operations: Addition, Subtraction, Multiplication, Division, Modulus, Power using pow(), Square root using sqrt(), Absolute value using abs(), Floor value using floor(), Ceiling value using ceil() 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %.2f\n",(float)a/b);
    printf("Modulus: %d\n",a%b);
    printf("Power: %.2f\n",pow(a,b));
    printf("Square root of first number: %.2f\n",sqrt(a));
    printf("Square root of second number: %.2f\n",sqrt(b));
    printf("Absolute value of first number: %d\n",abs(a));
    printf("Absolute value of second number: %d\n",abs(b));
    printf("Floor value of first number: %.2f\n",floor((float)a));
    printf("Floor value of second number: %.2f\n",floor((float)b));
    printf("Ceiling value of first number: %.2f\n",ceil((float)a));
    printf("Ceiling value of second number: %.2f\n",ceil((float)b));
    return 0;
}
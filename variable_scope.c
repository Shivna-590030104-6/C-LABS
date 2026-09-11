//Variable Scope Write a C program without using any user-defined function to demonstrate the difference between: local variable, global variable and static variable Your program should clearly show how the values of these variables change inside main() and inside a block. 
#include <stdio.h>
int main()
{
    int a = 10; // local variable
    static int b = 20; // static variable
    printf("Inside main():\n");
    printf("Local variable a: %d\n", a);
    printf("Static variable b: %d\n", b);
    
    {
        int a = 30; // local variable inside block
        static int b = 40; // static variable inside block
        printf("Inside block:\n");
        printf("Local variable a: %d\n", a);
        printf("Static variable b: %d\n", b);
        
        a++;
        b++;
        
        printf("After incrementing inside block:\n");
        printf("Local variable a: %d\n", a);
        printf("Static variable b: %d\n", b);
    }
    
    printf("After block:\n");
    printf("Local variable a: %d\n", a);
    printf("Static variable b: %d\n", b);
    
    return 0;
}

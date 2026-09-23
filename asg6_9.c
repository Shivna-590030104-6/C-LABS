//9.	Menu-Driven Number Operations
//Write a C program that repeatedly displays the following menu:
//1. Check Palindrome
//2. Check Armstrong Number
//3. Check Prime Number
//4. Find Sum of Digits
//5. Count the number of Digits of an integer
//6. Exit
#include <stdio.h>

int main()
{
    int choice, num, originalNum, reversedNum, remainder, sumOfDigits, countOfDigits;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    do
    {
        printf("\n--- NUMBER OPERATIONS ---\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Palindrome selected\n");
                break;

            case 2:
                printf("Armstrong selected\n");
                break;

            case 3:

                printf("Prime selected\n");
                break;

            case 4:
                printf("Sum of digits selected\n");
                break;

            case 5:
                printf("Count digits selected\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 6);

    return 0;
}
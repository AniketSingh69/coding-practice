// Question: Write a C program to input two integers and calculate
// their quotient and remainder.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b != 0)
    {
        int q = a / b;
        int r = a % b;

        printf("Quotient is: %d\n", q);
        printf("Remainder is: %d\n", r);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
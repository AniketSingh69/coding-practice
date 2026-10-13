#include <stdio.h>

int main()
{
    // Question: Write a C program to input three numbers,
    // calculate their sum, and find the greatest number.

    int x, y, z;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Enter third number: ");
    scanf("%d", &z);

    int sum = x + y + z;

    printf("Sum is: %d\n", sum);

    if (x >= y && x >= z)
    {
        printf("%d is the greatest number.\n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d is the greatest number.\n", y);
    }
    else
    {
        printf("%d is the greatest number.\n", z);
    }

    return 0;
}
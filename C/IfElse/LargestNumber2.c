// Question: Write a C program to input an integer and find
// the sum of its digits and the greatest digit.

#include <stdio.h>

int main()
{
    int number;

    printf("Please enter the number: ");
    scanf("%d", &number);

    int original = number;
    int sum = 0;
    int greatest = 0;

    while (number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }

    while (original != 0)
    {
        if (greatest < original % 10)
        {
            greatest = original % 10;
        }

        original = original / 10;
    }

    printf("Sum is: %d\n", sum);
    printf("Greatest digit is: %d\n", greatest);

    return 0;
}
// Question: Write a C program to input two integers from the user
// and calculate and display their sum.

#include <stdio.h>

int main()
{
    int first;
    int sec;

    printf("Please enter your first number: ");
    scanf("%d", &first);

    printf("Please enter your second number: ");
    scanf("%d", &sec);

    int sum = first + sec;

    printf("The sum of two numbers is %d\n", sum);

    return 0;
}
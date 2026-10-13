// Question: Write a C program to input an integer from the user
// and check whether it is divisible by 5. Display an appropriate
// message based on the result.

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }

    return 0;
}
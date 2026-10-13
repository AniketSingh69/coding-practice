// Question: Write a C program to input three numbers from the user
// and find and display the greatest among them.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d is the greatest number.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the greatest number.\n", b);
    }
    else
    {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}
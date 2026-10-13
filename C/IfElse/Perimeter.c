#include <stdio.h>

int main()
{
    // Question: Write a C program to input the length and breadth
    // of a rectangle, calculate its area and perimeter, and check
    // whether the area is greater than the perimeter.

    int l, b;

    printf("Enter the length: ");
    scanf("%d", &l);

    printf("Enter the breadth: ");
    scanf("%d", &b);

    int a = l * b;
    int p = 2 * (l + b);

    printf("Area is: %d\n", a);
    printf("Perimeter is: %d\n", p);

    if (a > p)
    {
        printf("Area is greater than perimeter.\n");
    }
    else
    {
        printf("Area is not greater than perimeter.\n");
    }

    return 0;
}
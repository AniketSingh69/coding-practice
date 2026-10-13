/*
 Write a C program to input the three angles of a triangle and check whether they form a valid triangle. If the triangle is valid, find and display the smallest angle; otherwise, display an appropriate error message.
*/


#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first angle: ");
    scanf("%d", &a);

    printf("Enter second angle: ");
    scanf("%d", &b);

    printf("Enter third angle: ");
    scanf("%d", &c);

    int sum = a + b + c;

    if (sum == 180 && a > 0 && b > 0 && c > 0)
    {
        printf("This forms a valid triangle.\n");

        if (a <= b && a <= c)
        {
            printf("Smallest angle is %d degree.\n", a);
        }
        else if (b <= a && b <= c)
        {
            printf("Smallest angle is %d degree.\n", b);
        }
        else
        {
            printf("Smallest angle is %d degree.\n", c);
        }
    }
    else
    {
        printf("Given angles do not form a valid triangle.\n");
    }

    return 0;
}
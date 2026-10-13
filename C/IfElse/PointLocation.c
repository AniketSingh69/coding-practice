#include <stdio.h>

int main()
{
    // Question: Write a C program to input the coordinates (x, y)
    // of a point and determine whether the point is at the origin,
    // lies on the x-axis, lies on the y-axis, or lies on neither axis.

    int x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is at the origin.\n");
    }
    else if (y == 0)
    {
        printf("The point lies on the x-axis.\n");
    }
    else if (x == 0)
    {
        printf("The point lies on the y-axis.\n");
    }
    else
    {
        printf("The point does not lie on the x-axis or y-axis.\n");
    }

    return 0;
}
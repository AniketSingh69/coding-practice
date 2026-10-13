// Question: Write a C program to calculate the volume of a sphere
// using the formula V = (4/3) * pi * r * r * r,
// where r is the radius of the sphere.

#include <stdio.h>

int main()
{
    int r = 7;

    double v = (4.0 / 3.0) * 3.1415 * r * r * r;

    printf("The volume is %.2f\n", v);

    return 0;
}
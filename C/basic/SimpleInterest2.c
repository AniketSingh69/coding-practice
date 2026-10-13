// Question: Write a C program to calculate simple interest
// using the formula SI = (P * R * T) / 100,
// where P is the principal, R is the rate of interest,
// and T is the time.

#include <stdio.h>

int main()
{
    float p = 152;
    float r = 10;
    float t = 2;

    float si = (p * r * t) / 100;

    printf("The simple interest is %.2f\n", si);

    return 0;
}
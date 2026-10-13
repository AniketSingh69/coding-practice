// Question: Write a C program to demonstrate the difference between
// int and long data types by adding 1 to the maximum value of an int
// and displaying the results.

#include <stdio.h>

int main()
{
    int x = 2147483647;   // Maximum value of a 32-bit signed int
    int y = -2147483648;  // Minimum value of a 32-bit signed int

    long a = (long)x + 1;

    printf("%d", x);
    printf("\n");
    printf("%ld", a);

    return 0;
}
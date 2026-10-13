// Question: Write a C program to input the principal amount,
// rate of interest, and time, then calculate and display
// the simple interest using SI = (P * R * T) / 100.

#include <stdio.h>

int main()
{
    float principal, rate, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    printf("Your simple interest is: %.2f\n", si);

    return 0;
}
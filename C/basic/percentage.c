// Question: Write a C program to calculate the percentage of marks
// obtained in five subjects, assuming each subject is out of 100.

#include <stdio.h>

int main()
{
    float m1 = 50;
    float m2 = 100;
    float m3 = 20;
    float m4 = 90;
    float m5 = 100;

    float p = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("The percentage of 5 subjects is %.2f%%\n", p);

    return 0;
}
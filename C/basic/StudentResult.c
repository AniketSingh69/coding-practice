// Question: Write a C program to input the number of students and
// their marks, then determine whether each student has passed or
// failed. A student passes if their marks are 40 or above.

#include <stdio.h>

int main()
{
    int NumberOFSTudents;

    printf("How many students do you have?\n");
    scanf("%d", &NumberOFSTudents);

    if (NumberOFSTudents <= 0)
    {
        printf("Invalid number of students.\n");
        return 0;
    }

    int arr[NumberOFSTudents];

    for (int i = 0; i < NumberOFSTudents; i++)
    {
        printf("Please enter marks for student %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < NumberOFSTudents; i++)
    {
        if (arr[i] < 40)
        {
            printf("Student %d has failed.\n", i + 1);
        }
        else
        {
            printf("Student %d has passed.\n", i + 1);
        }
    }

    return 0;
}
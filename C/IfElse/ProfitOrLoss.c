#include <stdio.h>

int main()
{
    // Question: Write a C program to input the cost price and
    // selling price of an item and determine whether there is
    // a profit, a loss, or neither.

    int cp, sp;

    printf("Enter cost price: ");
    scanf("%d", &cp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        printf("Profit\n");
    }
    else if (sp < cp)
    {
        printf("Loss\n");
    }
    else
    {
        printf("No profit, no loss\n");
    }

    return 0;
}
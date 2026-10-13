// write a program to check wheather user can vote (age > 18)

#include<stdio.h>
int main()
{
int x;
printf("Enter your age \n");
scanf("%d",&x);

    if (x >= 18)
    {
       printf("yes you can vote \n");
    }
    else
    {
        printf("no you can not vote \n");
    }
    return 0;
}
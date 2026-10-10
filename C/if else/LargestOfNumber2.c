#include<stdio.h>
int main()
{

int number;


printf("pls enter the number!");
scanf("%d",&number);



//351

int original = number;
int sum = 0;
int greatest = 0;

while(number!=0)
{
    sum += number%10;
    number = number/10;


} 

while(original!=0)
{
    if(greatest<original%10)
    {
        greatest = original%10;
    }

    original =original/10;
}

printf("sum is %d",sum);
printf("\n");
printf("Greatest Number is %d",greatest);







    return 0;
}
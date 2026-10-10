#include<stdio.h>
int main()
{
    int x;
    printf("Pls enter your age \n");
    scanf("%d",&x);




    if (x >= 18)
    {
       printf("yes");
    }
    
    else
    { 
        printf("can not vote!");
    }


    return 0;
}
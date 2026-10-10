#include<stdio.h>
int main()
{

int marks=0;
int NumberOFSTudents;


printf("How Many student you have?\n");
scanf("%d",&NumberOFSTudents);


int arr[NumberOFSTudents];
for(int i=0;i<NumberOFSTudents;i++)
{
    printf("Pls ENter marks for %d student",i+1);
    scanf("%d",&arr[i]);
}


for(int i=0;i<NumberOFSTudents;i++)
{
    if(arr[i]<40)
    {
        printf("student %d is failed\n",i);
    }
    else
    {
       printf("student %d is passed\n",i); 
    }
}




    if(marks<40)
    {
        printf("Ye bachha fail hai!");
    }

    else
    {
        printf("ye bacha pass hai");
    }



    return 0;
}
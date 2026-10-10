#include<stdio.h>
int main()
{
 int a ,b;
 printf("enter first number");
 scanf("%d",a);
 printf("enter sec number");
 scanf("%d",b);
 int q = a/b ;
 int r= a-(b*q);

return 0;    
}
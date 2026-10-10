#include<stdio.h>
int main()
{
 float principl,rate,time,si;

 scanf("%f",& principl );
 scanf("%f",&rate);
 scanf("%f",&time);
si = (principl*rate*time)/100;
printf("your simple interest is : %f,si");


 return 0;    
}
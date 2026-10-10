#include<stdio.h>
int main()
{
    int l;
    printf("inter the lenth");
    scanf("%d",&l);
    int b;
    printf("inter the breath");
    scanf("%d",&b);
    int a = l*b ;
    int p = 2* (l+b);
    if (a>p){
        printf("area is grater then perimeter");
    }
    else{
        printf("area is not grater then perimeter"); 
    }
    return 0;        
}
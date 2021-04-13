#include<stdio.h>
int main()
{
    int age,x,y,sum;
    printf("What is your age?");
    scanf("%d",&age);
    x=age/10*10;
    printf("X is:%d\n",x);
    y=age%10;
    printf("Y is:%d\n",y);
    sum=x+y;
    printf("The addition of two digits of her age number is:%d",sum);
    return 0;
}

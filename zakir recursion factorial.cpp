#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n,result;
    printf("The number:");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial:%d",result);
    return 0;
}

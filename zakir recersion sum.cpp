#include<stdio.h>
int sumFunc(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sumFunc(n-1);
    }
}
int main()
{
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=sumFunc(n);
    printf("Sum of %d number:%d",n,sum);
    return 0;
}

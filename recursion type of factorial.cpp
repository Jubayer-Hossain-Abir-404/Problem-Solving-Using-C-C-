#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int s;
    if(n==1)
    {
        return 1;
    }
    else
    {
        s=n+factorial(n-1);
        return s;
    }
}
int main()
{
    int n,ans;
    printf("The value:");
    scanf("%d",&n);
    ans=factorial(n);
    printf("The Factorial:%d",ans);
    return 0;
}

#include<stdio.h>
int getsum(int n)
{
    static int sum=0;
    if(n>0)
    {
        sum=sum+n;
        getsum(n-1);
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=getsum(n);
    printf("Sum:%d",sum);
    return 0;
}

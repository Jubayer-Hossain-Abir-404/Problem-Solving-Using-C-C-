#include<stdio.h>
int addn(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n,ans;
    printf("Enter value:");
    scanf("%d",&n);
    ans=addn(n);
    printf("Answer=%d",ans);
    return 0;
}

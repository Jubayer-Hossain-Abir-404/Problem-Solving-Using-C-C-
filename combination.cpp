#include<stdio.h>
int main()
{
    int n,i,j,r,a=1,b=1,c=1,comb,k,ans;
    printf("The value of n and r:");
    scanf("%d%d",&n,&r);
    comb=n-r;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    for(j=1;j<=r;j++)
    {
        b=b*j;
    }
    for(k=1;k<=comb;k++)
    {
        c=c*k;
    }
    ans=a/(b*c);
    printf("%d",ans);
    return 0;
}

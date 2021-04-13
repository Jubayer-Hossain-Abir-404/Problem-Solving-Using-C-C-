#include<stdio.h>
int FactorCount(int p)
{
    int i,c=0;
    for(i=1; i<=p; i++)
    {
        if(p%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int i,x,y,ans;
    for(i=0; i<10; i++)
    {
        printf("\nThe values:");
        scanf("%d%d",&x,&y);
        ans=FactorCount(x);
        printf("Number of factor 1:%d",ans);
        ans=FactorCount(y);
        printf("\nNumber of factor 2:%d",ans);
    }
    return 0;
}

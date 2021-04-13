#include<stdio.h>
int FindMax(int *p,int q)
{
    int Maximum,i;
    Maximum=p[0];
    for(i=0;i<q;i++)
    {
       if(p[i]>Maximum)
       {
           Maximum=p[i];
       }
    }
    return Maximum;
}
int main()
{
    int x[100],i,n;
    int ans;
    printf("How many times:");
    scanf("%d",&n);
    printf("The values are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    ans=FindMax(x,n);
    printf("MAx is %d",ans);
    return 0;
}

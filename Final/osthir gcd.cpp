#include<stdio.h>
#include<math.h>
int GCD(int a,int b)
{
    if(b%a==0)
    {
        return a;
    }
    else
    {
        GCD(b%a,a);
    }
}
int main()
{
    int ans,x,y;
    printf("The values:");
    scanf("%d%d",&x,&y);
    ans=GCD(x,y);
    printf("Ans=%d",ans);
    return 0;
}

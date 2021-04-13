#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        gcd(b%a,a);
        return ans;
    }
}
int main()
{
    int x,y,ans;
    printf("The values:");
    scanf("%d%d",&x,&y);
    ans=gcd(x,y);
    printf("Ans=%d",ans);
    return 0;
}

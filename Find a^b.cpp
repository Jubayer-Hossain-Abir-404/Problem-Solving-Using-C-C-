#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    int s;
    if(b==0)
    {
        return 1;
    }
    else
    {
        s=a*power(a,b-1);
    }
}
int main()
{
    int x,y,ans;
    printf("The values:");
    scanf("%d%d",&x,&y);
    ans=power(x,y);
    printf("Ans:%d",ans);
    return 0;
}

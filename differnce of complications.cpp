#include<stdio.h>
int main()
{


int x,y,ans;
scanf("%d%d",&x,&y);
ans=x-y;
if(ans<0)
{
    ans=ans*(-1);
}
printf("%d",ans);
return 0;

}


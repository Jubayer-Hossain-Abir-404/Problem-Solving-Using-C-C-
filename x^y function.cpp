#include<stdio.h>
int WholePower(int p,int q)
{
    int i,k;
    k=p;
    for(i=1;i<q;i++)
    {
        k=p*k;
    }
    return k;
}
int main()
{
    int x,y,ans;
    printf("Enter the value x,y:\n");
    scanf("%d%d",&x,&y);
    ans=WholePower(x,y);
    printf("Your answer is :%d",ans);
    return 0;

}

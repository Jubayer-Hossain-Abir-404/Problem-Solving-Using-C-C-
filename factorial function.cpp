#include<stdio.h>
int Facctorial(int x)
{
    static int i,result=1;
    for(i=1;i<=x;i++)
    {
        result=result*i;
    }
    return result;
}
int main()
{
    int n,ans;
    printf("Enter the value of N:");
    scanf("%d",&n);
    ans=Facctorial(n);
    printf("Your factorial is :%d",ans);
    return 0;

}

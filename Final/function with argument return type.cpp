#include<stdio.h>
int argument(int i)
{
    int j,k=0;
    for(j=1;j<=i;j+=2)
    {
        k=k+j;
    }
    return k;
}
int main()
{
    int n,ans;
    printf("Enter the value of N:");
    scanf("%d",&n);
    ans=argument(n);
    printf("The sum is %d",ans);
    return 0;
}

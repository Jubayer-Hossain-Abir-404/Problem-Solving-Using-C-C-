#include<stdio.h>
#include<math.h>
int isperfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,ans;
    printf("Give me a number to work with:");
    scanf("%d",&n);
    ans=isperfect(n);
    if(ans==1)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int FindMaximum(int x[],int n)
{
    int i,maximum;
    maximum=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]>maximum)
        {
            maximum=x[i];
        }
    }
    return maximum;
}
int main()
{
    int i,n,ans;
    int x[20];
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter %d elements below:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    ans=FindMaximum(x,n);
    printf("The maximum one is %d",ans);
    return 0;
}

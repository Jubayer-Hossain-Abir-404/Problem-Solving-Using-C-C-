#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int sum=0;
    int count=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        if(count%2==0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
        count++;
    }
    printf("%d",sum);
    return 0;
}

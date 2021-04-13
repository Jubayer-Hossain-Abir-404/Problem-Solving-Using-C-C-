#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,rem;
    printf("The n is:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The x is:");
        scanf("%d",&x);
        if(i==1)
        {
            rem=x;
        }
        else if(x>rem)
        {
            rem=x;
        }
    }
    printf("Highest:%d",rem);
}

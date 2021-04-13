#include<stdio.h>
#include<math.h>
int main()
{
    int x,rem,i,n;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The value of x:");
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
    printf("The highest number is:%d",rem);
    return 0;
}

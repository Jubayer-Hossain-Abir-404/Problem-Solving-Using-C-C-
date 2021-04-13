#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x;
    int sum=0;
    printf("The value of n:");
    scanf("%d",&n);
    printf("The value of x:");
    scanf("%d",&x);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+pow(x,i);
    }
    printf("%d",sum);
    return 0;
}

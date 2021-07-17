#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x,p;
    int sum=0;
    printf("The value of n:");
    scanf("%d",&n);
    printf("The value of x:");
    scanf("%d",&x);
    p=x;
    for(i=1;i<=n;i++)
    {
        sum=sum+p;
        p=p*(x*x);
        printf("%d\n",p);
    }
    printf("Sum:%d",sum);
    return 0;

}

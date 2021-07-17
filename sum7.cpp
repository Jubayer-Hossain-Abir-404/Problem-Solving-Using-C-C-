#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int p=1;
    int sum=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p*i;
        sum=sum+p;
        printf("%d\n",p);
    }
    printf("Sum:%d",sum);
    return 0;
}

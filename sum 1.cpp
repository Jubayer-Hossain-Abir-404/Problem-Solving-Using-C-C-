#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int sum=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}

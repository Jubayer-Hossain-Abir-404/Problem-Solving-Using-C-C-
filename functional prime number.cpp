#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("The prime numbers between 1 and n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            printf("Not prime:%d\n",i);
        }
    }
    return 0;
}

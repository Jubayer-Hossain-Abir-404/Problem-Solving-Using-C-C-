#include<stdio.h>
#include<math.h>
int isprime(int i)
{
    int j,c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==0)
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
    int j,n,c=0,sum,d=0;
    printf("What is the range:");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        if(isprime(j)==1)
        {
            printf("%d  ",j);
            c++;
            sum=sum+j;
            d++;
        }
        if(c==8)
        {
            printf("\n");
            c=0;
        }
    }
    printf("\nSum=%d",sum);
    printf("\nTotal number=%d",d);
    return 0;
}

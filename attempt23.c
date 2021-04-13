#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
           sum=sum+1;
           printf("%d",sum);
        }
        printf("\n");
    }
    return 0;
}

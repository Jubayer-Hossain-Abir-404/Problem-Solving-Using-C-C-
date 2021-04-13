#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("How many times:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=i-1;k>=1;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

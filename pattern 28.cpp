#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<5;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

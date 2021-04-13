#include<stdio.h>
#include<math.h>
int main()
{
    int x[10][10];
    int i,j,n,k,l;
    printf("How many times:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x[i][j]=i*j;
        }
    }
    for(k=1;k<=n;k++)
    {
        for(l=1;l<=n;l++)
        {
            printf("%d  ",x[k][l]);
        }
        printf("\n");
    }
    return 0;
}

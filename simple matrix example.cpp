#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,k,m,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("The values are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("After fixing stuff:\n");
    for(k=0;k<n;k++)
    {
        for(m=0;m<n;m++)
        {
            printf("%d   ",a[k][m]);
        }
        printf("\n");
    }
    return 0;
}

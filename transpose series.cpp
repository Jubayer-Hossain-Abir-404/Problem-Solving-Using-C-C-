#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,k,l,m,g,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("Crunching numbers:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original series:\n");
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            printf("%d   ",a[k][l]);
        }
        printf("\n");
    }
    printf("Transpose series:\n");
    for(m=0;m<n;m++)
    {
        for(g=0;g<n;g++)
        {
            printf("%d    ",a[g][m]);
        }
        printf("\n");
    }
    return 0;
}


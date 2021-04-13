#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,k,l,m,b,c,n,swaped;
    printf("How many times:");
    scanf("%d",&n);
    printf("The matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<n-1;l++)
        {
            for(m=l+1;m<n;m++)
            {
                if(a[k][l]>a[k][m])
                {
                    swaped=a[k][l];
                    a[k][l]=a[k][m];
                    a[k][m]=swaped;
                }
            }
        }
    }
    printf("Sorted by sorted matrix:\n");
    for(b=0;b<n;b++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d   ",a[b][c]);
        }
        printf("\n");
    }
    return 0;
}

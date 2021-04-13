#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,k,l,b,c,m,n;
    int sum=0;
    printf("Enter the row and column of matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix:\n");
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {
            printf("%d   ",a[k][l]);
        }
        printf("\n");
    }
    for(b=0;b<m;b++)
    {
        for(c=0;c<n;c++)
        {
            if(b==c)
            {
                sum=sum+a[b][c];
            }
        }
    }
    printf("Sum of the diagonal elements of a matrix:%d",sum);
    return 0;
}

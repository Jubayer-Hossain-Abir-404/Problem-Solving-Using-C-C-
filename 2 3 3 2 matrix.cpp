#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,a,b,c,m,n,sum;
    int x[2][3],y[3][2],z[2][2];
    printf("The first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(k=0;k<3;k++)
    {
        for(l=0;l<2;l++)
        {
            scanf("%d",&y[k][l]);
        }
    }
    sum=0;
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            for(c=0;c<3;c++)
            {
                sum=sum+x[a][c]*y[c][b];
            }
            z[a][b]=sum;
            sum=0;
        }
    }
    printf("After multiplication of the matrix:\n");
    for(m=0;m<2;m++)
    {
        for(n=0;n<2;n++)
        {
            printf("%d   ",z[m][n]);
        }
        printf("\n");
    }
    return 0;

}

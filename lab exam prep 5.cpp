#include<stdio.h>
#include<math.h>
int main()
{
    int x[2][4],y[4][2],z[2][2];
    int i,j,k,l,a,b,c,m,n,sum;
    printf("The first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(k=0;k<4;k++)
    {
        for(l=0;l<2;l++)
        {
            scanf("%d",&y[k][l]);
        }
    }
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            sum=0;
            for(c=0;c<4;c++)
            {
                sum=sum+x[a][c]*y[c][b];
            }
            z[a][b]=sum;
        }
    }
    printf("The multiplication of matrix:\n");
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

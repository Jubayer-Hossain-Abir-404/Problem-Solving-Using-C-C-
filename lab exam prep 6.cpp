#include<stdio.h>
#include<math.h>
int main()
{
    int x[2][3],y[2][3],z[2][3];
    int i,j,k,l,a,b,p,q;
    printf("The first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(k=0;k<2;k++)
    {
        for(l=0;l<3;l++)
        {
            scanf("%d",&y[k][l]);
        }
    }
    for(a=0;a<2;a++)
    {
        for(b=0;b<3;b++)
        {
            z[a][b]=x[a][b]-y[a][b];
        }
    }
    printf("Addition of matrix:\n");
    for(p=0;p<2;p++)
    {
        for(q=0;q<3;q++)
        {
            printf("%d   ",z[p][q]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,sum,x[10][10],y[10][10],z[10][10],minimum;
    printf("The elements of first matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("The elements of second matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=0;
            for(k=0;k<4;k++)
            {
                sum=sum+x[i][k]*y[k][j];
            }
            z[i][j]=sum;
        }
    }
    printf("The matrix after multiplication:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",z[i][j]);
        }
        printf("\n");
    }
    minimum=z[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(z[i][j]<minimum)
            {
                minimum=z[i][j];
            }
        }
    }
    printf("The lowest element is:%d",minimum);
    return 0;

}

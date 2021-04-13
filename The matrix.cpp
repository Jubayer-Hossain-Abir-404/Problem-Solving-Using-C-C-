#include<stdio.h>
#include<math.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int x[3][3];
    int i,j,k,l,c,d,e,f,g,h,m,o,p,n;
    int sum=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
        for(g=0;g<n;g++)
        {
            for(h=0;h<n;h++)
            {
                for(m=0;m<n;m++)
                {
                    sum=sum+a[g][m]*b[m][h];
                }
                x[g][h]=sum;
                sum=0;
            }
        }
        printf("A:\n");
        for(c=0;c<n;c++)
        {
            for(d=0;d<n;d++)
            {
                printf("%d   ",a[c][d]);
            }
            printf("\n");
        }
        printf("B:\n");
        for(e=0;e<n;e++)
        {
            for(f=0;f<n;f++)
            {
                printf("%d   ",b[e][f]);
            }
            printf("\n");
        }
        printf("After multiplication of matrix:\n");
        for(o=0;o<n;o++)
        {
            for(p=0;p<n;p++)
            {
                printf("%d   ",x[o][p]);
            }
            printf("\n");
        }
        return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int x[3][3];
    int i,j,a,b,sum=0;
    printf("The matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            if(a+b==2)
            {
                sum=sum+x[a][b];
            }
        }
    }
    printf("Sum:%d",sum);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,sum;
    int x[10][10];
    printf("The values:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(a=0;a<5;a++)
    {
        sum=0;
        for(b=0;b<3;b++)
        {
            sum=sum+x[b][a];
        }
        printf("Sum no.%d is %d\n",a+1,sum);
    }
}

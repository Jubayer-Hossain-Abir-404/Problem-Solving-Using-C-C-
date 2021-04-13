#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,z,sum,c;
    int x[3][5];
    float avg;
    printf("The values:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(a=0;a<3;a++)
    {
        sum=0;
        for(b=0;b<5;b++)
        {
            sum=sum+x[a][b];
        }
        printf("Sum:%d\n",sum);
        avg=sum/5.0;
        printf("Average:%.2f\n",avg);
        c=0;
        for(z=0;z<5;z++)
        {
            if(x[a][z]>avg)
            {
                c++;
            }
        }
        printf("C:%d\n",c);
    }
    return 0;
}

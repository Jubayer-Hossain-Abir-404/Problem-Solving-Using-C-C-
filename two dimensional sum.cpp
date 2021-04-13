#include<stdio.h>
#include<math.h>
int main()
{
    int x[3][5];
    int i,j,a,b,sum;
    int c=0;
    printf("The numbers:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(a=0; a<3; a++)
    {
        sum=0;
        for(b=0; b<5; b++)
        {
            sum=sum+x[a][b];
            if(x[a][b]%2!=0)
            {
                c++;
            }
        }
        printf("Sum:%d\n",sum);
    }
    printf("\nC:%d",c);
    return 0;
}

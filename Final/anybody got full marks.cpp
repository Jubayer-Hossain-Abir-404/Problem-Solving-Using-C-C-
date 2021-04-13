#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j;
    int c=0;
    int x[3][5];
    printf("The numbers:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<5;b++)
        {
            if(x[a][b]==30)
            {
                printf("The person %d got full marks in exam no %d\n",a+1,b+1);
            }
        }
    }
    return 0;
}

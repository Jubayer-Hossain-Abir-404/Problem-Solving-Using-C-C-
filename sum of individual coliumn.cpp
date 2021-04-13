#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int x[5][5];
    int sum=0;
    printf("The matrix:\n");
    for(a=0;a<5;a++)
    {
        for(b=0;b<5;b++)
        {
            scanf("%d",&x[a][b]);
        }
    }
    for(a=0;a<5;a++)
    {
        sum=sum+x[a][4-a];
    }
    printf("Sum:%d",sum);
    return 0;
}

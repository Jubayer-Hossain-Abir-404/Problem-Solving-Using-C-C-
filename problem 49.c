#include<stdio.h>
int main()
{
    int array[3][3];
    int i,j;
    int sum=0;
    float avg;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
            sum=sum+array[i][j];
        }
    }
    avg=sum/9;
    printf("%.2f\n",avg);
    return 0;
}

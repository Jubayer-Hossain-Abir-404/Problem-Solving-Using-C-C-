#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    float avg;
    for(i=10;i<=500;i++)
    {
        if(i%3==0&&i%5==0&&i%12==0)
        {
            for(j=10;j<=i;j++)
            {
                printf("%d\n",j);
            }
            sum=sum+i;
            avg=sum/j;
        }
    }
    printf("%d",sum);
    printf("%d",avg);
    return 0;

}

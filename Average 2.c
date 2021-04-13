#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int j=0;
    float avg;
    for(i=10;i<=500;i++)
    {
        if(i%3==0&&i%5==0&&i%12==0)
        {
            sum=sum+i;
            printf("%d",sum);

            j++;
        }


    }


    avg=sum/j;
    printf("\n%.2f",avg);
    return 0;
}

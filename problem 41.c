#include<stdio.h>
int main()
{
    int i;
    int count=0;
    float avg;
    int sum=0;
    for(i=10;i<=500;i++)
    {
        if(i%3==0&&i%5==0&&i%12==0)
        {
            sum=sum+i;
            count++;
        }

    }
    printf("The summation is %d",sum);
    avg=sum/count;
    printf("\nThe average is %.2f",avg);
    return 0;
}

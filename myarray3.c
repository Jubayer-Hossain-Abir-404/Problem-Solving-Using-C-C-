#include<stdio.h>
int main()
{
    int array[5];
    int great;
    int i;
    int count=0;
    int sum=0;
    float avg;
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>100)
        {

            count++;
            sum=sum+array[i];
        }

    }

    avg=sum/count;
    printf("%.2f",avg);

    return 0;
}

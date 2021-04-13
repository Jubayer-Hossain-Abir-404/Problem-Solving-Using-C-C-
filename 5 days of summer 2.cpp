#include<stdio.h>
#include<math.h>
int main()
{
    int i,day;
    int count=0;
    float avg,temp;
    float total=0;
    float x=1000;
    printf("The days are:");
    scanf("%d",&day);
    for(i=1;i<=day;i++)
    {
        printf("The temperatures are:");
        scanf("%f",&temp);
        if(i==1)
        {
            x=temp;
        }
        else if(temp>x)
        {
            total=total+temp;
            count++;
        }
        x=temp;
        printf("The temperature of the previous day is:%.2f\n",x);
    }
    avg=(float)total/count;
    printf("The number of days when temperature is increasing:%d\n",count);
    printf("The total temperature is:%.2f\n",total);
    printf("The average temperature is:%.2f",avg);
    return 0;
}


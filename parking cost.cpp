#include<stdio.h>
#include<math.h>
int main()
{
    int parking_time,cost;
    printf("Please tell me the duration of your parking time:");
    scanf("%d",&parking_time);
    cost=ceil(parking_time/30.0)*20;
    printf("The bill you have to pay is now:%d",cost);
    return 0;

}

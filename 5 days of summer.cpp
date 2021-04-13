#include<stdio.h>
#include<math.h>
int main()
{
    int i,day;
    int count=0;
    float temp,avg;
    float total=0;
    printf("The days are:");
    scanf("%d",&day);
    for(i=1;i<=day;i++)
    {
        printf("The temperatures are:");
        scanf("%f",&temp);
        if(temp>35)
        {
            total=total+temp;
            count++;
        }
    }
    avg=(float)total/count;
    printf("The total temperature is:%.2f\n",total);
    printf("The number of days when temperature is much hotter:%d\n",count);
    printf("The average of last five days temperature is:%.2f\n",avg);
    return 0;
}

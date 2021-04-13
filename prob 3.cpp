#include<stdio.h>
#include<math.h>
int main()
{
    int i,day;
    int x=0;
    int count=0;
    float temp,avg;
    float total=0;
    printf("The days are:");
    scanf("%d",&day);
    for(i=1; i<=day; i++)
    {
        printf("The temperatures are:");
        scanf("%f",&temp);
        if(i==1)
        {
            total=total+temp;
            x=i;
            count++;
        }
        else if(i>x)
        {
            total=total+temp;
            count++;
            avg=(float)total/count;
            printf("Average:%.2f\n",avg);
            total=temp;
            x=i;
            count=1;
        }

    }
    return 0;
}

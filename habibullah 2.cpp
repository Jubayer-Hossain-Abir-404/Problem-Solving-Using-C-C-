#include<stdio.h>
#include<math.h>
int main()
{
    int year1,year2;
    printf("Give me the following years:");
    scanf("%d%d",&year1,&year2);
    while(year1<=year2)
    {
        if(year1%4==0&&year1%100==0&&year1%400==0)
        {
            printf("%d ",year1);
        }
        else if(year1%4==0&&year1%100!=0&&year1%400!=0)
        {
            printf("%d, ",year1);
        }
        year1++;
    }
    return 0;
}


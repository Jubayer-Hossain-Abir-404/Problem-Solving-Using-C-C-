#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("What's the fucking year:");
    scanf("%d",&year);
    if(year%4==0&&year%100==0&&year%400==0)
    {
        printf("Leap Year");
    }
    else if(year%4==0&&year%100!=0&&year%400==0)
    {
        printf("Leap Year");
    }
    else if(year%4==0&&year%100!=0&&year%400!=0)
    {
        printf("Leap Year");
    }
    else if(year%4==0&&year%100==0&&year%400!=0)
    {
        printf("Not Leap Year");
    }
    else if(year%4!=0)
    {
        printf("Not Leap Year");
    }
    return 0;
}

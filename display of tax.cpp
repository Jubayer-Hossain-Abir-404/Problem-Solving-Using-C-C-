#include<stdio.h>
#include<math.h>
int main()
{
    int income;
    float tax;
    printf("Sir,May I know your income please:");
    scanf("%d",&income);
    if(income<=500000)
    {
        tax=income*0.2;
    }
    else
    {
        tax=(income-500000)*0.25+500000*0.20;
    }
    printf("Sir the amount of tax is:%.2f",tax);
    return 0;
}

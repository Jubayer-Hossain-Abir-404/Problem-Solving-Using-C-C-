#include<stdio.h>
#include<math.h>
int main()
{
    int income;
    float tax;
    printf("What is your income:");
    scanf("%d",&income);
    if(tax<=500000)
    {
        tax=income*0.15;
    }
    else if(tax<=1000000)
    {
        tax=(income-500000)*0.2+500000*0.15;
    }
    else if(tax>1000000)
    {
        tax=(income-1000000)*0.25+500000*0.2+500000*0.15;
    }
    printf("The Tax is :%.2f",tax);
    return 0;
}

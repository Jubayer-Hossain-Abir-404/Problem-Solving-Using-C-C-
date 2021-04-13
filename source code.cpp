#include<stdio.h>
#include<math.h>
int main()
{
    float consumption_unit,Total_amount;
    int people;
    printf("What is the consumption unit:");
    scanf("%f",&consumption_unit);
    printf("The number of customers:");
    scanf("%d",&people);
    if(consumption_unit>=0&&consumption_unit<=200)
    {
        Total_amount=people*consumption_unit*0.50;
    }
    else if(consumption_unit>=201&&consumption_unit<=400)
    {
        Total_amount=(people*((200*0.5)+(consumption_unit-200)*0.65))+100;
    }
    else if(consumption_unit>=401&&consumption_unit<=600)
    {
        Total_amount=(people*((200*0.5)+(200*0.65)+(consumption_unit-400)*0.80))+230;
    }
    else if(consumption_unit>=601)
    {
        Total_amount=(people*((200*0.5)+(200*0.65)+(200*0.80)+(consumption_unit-600)*1.00))+390;
    }
    printf("Total amount to be paid:%.2f",Total_amount);
    return 0;
}

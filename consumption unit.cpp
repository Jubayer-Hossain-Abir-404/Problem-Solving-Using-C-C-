#include<stdio.h>
#include<math.h>
int main()
{
    int customer_number;
    float consumption_unit,Total_amount;
    printf("The number of customers:");
    scanf("%d",&customer_number);
    printf("The unit of electricity you have used:");
    scanf("%f",&consumption_unit);
    if(consumption_unit<=200)
    {
        Total_amount=consumption_unit*0.50;
    }
    else if(consumption_unit<=400)
    {
        Total_amount=100+((consumption_unit-200)*0.65);
    }
    else if(consumption_unit<=600)
    {
        Total_amount=230+((consumption_unit-400)*0.80);
    }
    else
    {
        Total_amount=390+((consumption_unit-600)*1.00);
    }
    printf("The total amount has to be paid by the customer no.%d:%.2f",customer_number,Total_amount);
    return 0;

}

#include<stdio.h>
#include<math.h>
int main()
{
    float base_salary,bonus,commission,Total_Salary,price,Bonus,Commission;
    int quantity;
    printf("The Base Salary is:");
    scanf("%f",&base_salary);
    printf("The price of computer is:");
    scanf("%f",&price);
    printf("The number of computers sold:");
    scanf("%d",&quantity);
    printf("For every selling computer the bonus you get:");
    scanf("%f",&bonus);
    printf("What's the commission:");
    scanf("%f",&commission);
    Bonus=quantity*bonus;
    Commission=commission*price*quantity;
    Total_Salary=Commission+Bonus+base_salary;
    printf("Bonus=%.2f\n",Bonus);
    printf("Commission=%.2f\n",Commission);
    printf("Total Salary=%.2f",Total_Salary);
    return 0;


}

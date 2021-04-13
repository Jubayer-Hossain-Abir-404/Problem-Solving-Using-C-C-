#include<stdio.h>
#include<math.h>
int main()
{
    float C,F;
    printf("Can you tell me today's temperature in Fahrenheit:");
    scanf("%f",&F);
    C=5*(F-32)/9;
    printf("After converting Fahrenheit to Celsius:%.2f",C);
    return 0;


}

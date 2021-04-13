#include<stdio.h>
int main()
{
    int temperature;
    printf("Enter temperature value:");
    scanf("%d",&temperature);
    if(temperature>30)
    {
        printf("Today's weather is too hot");
    }
    if(temperature<30)
    {
        printf("Today's weather is too cool");
    }
    return 0;
}

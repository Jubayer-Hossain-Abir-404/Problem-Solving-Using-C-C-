#include<stdio.h>
int main()
{
    double C,F;
    printf("Enter the temparature:");
    scanf("%lf",&C);
    F=((C*(9.0/5.0))+32);
    printf("The temparature of this DAY is :%lf",F);
    return 0;
}

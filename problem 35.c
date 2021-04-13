#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=5;i<=25;i++)
    {
        printf("+%d",i*i);
        sum=sum+(i*i);
    }
    printf("\nThe summation is %d",sum);
    return 0;
}

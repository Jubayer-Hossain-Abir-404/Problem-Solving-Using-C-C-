#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=101; i>=1; i-=2)
    {
        printf("+%d",i);
        sum=sum+i;
    }
    printf("\nTHe summation is %d",sum);


    return 0;
}


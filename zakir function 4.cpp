#include<stdio.h>
int factorial(int n)
{
    int i;
    int result=1;

        for(i=1;i<=n;i++)
        {
            result=result*i;
            printf("%d ",result);
        }

    return result;
}
int main()
{
    int num;
    printf("The number:");
    scanf("%d",&num);
    factorial(num);
    return 0;
}

#include<stdio.h>
int factorial(int n)
{
    int i;
    int result=1;
    if(n>1)
    {
        for(i=2; i<=n; i++)
        {
            result=result*i;
        }
    }
    return result;
}
int main()
{
    int num;
    printf("Give me a number:");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}


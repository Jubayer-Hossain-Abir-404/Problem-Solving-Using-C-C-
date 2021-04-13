#include<stdio.h>
int factorial(int n)
{
    static int result=1;
    if(n>1)
    {
        result=result*n;
        factorial(n-1);
    }
    return result;
}
int main()
{
    int n,result;
    printf("The value of n:");
    scanf("%d",&n);
    result=factorial(n);
    printf("Factorial is:%d",result);
    return 0;
}

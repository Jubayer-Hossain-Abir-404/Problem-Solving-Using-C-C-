#include<stdio.h>
void check_prime(int num);
int main()
{
    int a;
    printf("The number:");
    scanf("%d",&a);
    check_prime(a);
    return 0;
}
void check_prime(int num)
{
    int i,c=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0&&num!=1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}

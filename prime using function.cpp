#include<stdio.h>
void PrimeFunction(int p)
{
    int i,c=0;
    for(i=2;i<p;i++)
    {
        if(p%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("%d is prime",p);
    }
    else
    {
        printf("%d is not prime",p);
    }
}
int main()
{
    int n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    PrimeFunction(n);
    return 0;

}

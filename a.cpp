#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;


    for(n=2;n<=50;n++)
    {
        for(a=2;a<=n;a++)
    {
        if(n%a==0)
        {
            printf("Divisible by %d\n",n);
        }
        else if(n%a!=0)
        {
            printf("Not divisible by %d\n",n);
        }
    }
    }
    return 0;
}

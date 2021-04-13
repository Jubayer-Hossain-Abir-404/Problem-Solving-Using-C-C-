#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("x:");
    scanf("%d",&x);
    while(x!=1)
    {
        if(x%2==0)
        {
            x=x/2;
        }
        else
        {
            x=3*x+1;
        }
        printf("%d   ",x);
    }
    return 0;
}


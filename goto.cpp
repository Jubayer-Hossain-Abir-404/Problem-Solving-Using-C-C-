#include<stdio.h>
#include<math.h>
int main()
{
    int n,A;
    scanf("%d ",&n);
    A:
        printf("%d",n);
        while(n==1)
        {
            continue;
        }
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%2!=0)
        {
            n=3*n+2;
        }
        goto A;
        return 0;
}

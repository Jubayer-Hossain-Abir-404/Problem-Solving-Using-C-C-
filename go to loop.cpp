#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0;
    int n=1;
    loop:
        sum=sum+n*n;
        if(n==10)
            goto print;
        else
        {
            n=n+1;
            goto loop;
        }
        print:
            printf("Result:%d",sum);
            return 0;
}

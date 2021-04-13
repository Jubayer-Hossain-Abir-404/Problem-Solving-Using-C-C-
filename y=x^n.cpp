#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int count=1;
    int y=1;
    printf("The value of x:");
    scanf("%d",&x);
    printf("The value of n:");
    scanf("%d",&n);
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("After squaring the value is:%d",y);
    return 0;

}

#include<stdio.h>
#include<math.h>
void fibonacci(int n)
{
    int first=0;
    int second=1;
    int i,swaped;
    for(i=1;i<=n;i++)
    {
        swaped=first;
        first=second;
        second=swaped+first;
        printf("%d  ",second);
    }
}
int main()
{
    int n;
    printf("Enter the value of n>>");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

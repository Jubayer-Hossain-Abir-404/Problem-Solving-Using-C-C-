#include<stdio.h>
#include<math.h>
int main()
{
    int age,x,y,sum;
    printf("What the fuck is your age:");
    scanf("%d",&age);
    x=(age/10)*10;
    y=age%10;
    sum=x+y;
    printf("The sum is :%d",sum);
    return 0;
}

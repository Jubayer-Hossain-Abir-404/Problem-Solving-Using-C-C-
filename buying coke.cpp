#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,c,cost;
    printf("The number of coke I am buying:");
    scanf("%d",&c);
    x=c/5;
    y=c%5;
    cost=(x*100)+(y*30);
    printf("The cost I have to bear today is:%d",cost);
    return 0;
}

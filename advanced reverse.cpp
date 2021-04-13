#include<stdio.h>
#include<math.h>
int main()
{
    int number,reverse,w,d,x,r,y,z;
    printf("Give me a number and I will reverse it:");
    scanf("%d",&number);
    w=number/1000;
    d=number%1000;
    x=d/100;
    r=d%100;
    y=r/10;
    z=r%10;
    reverse=z*1000+y*100+x*10+w;
    printf("The reversed number is:%d",reverse);
    return 0;
}

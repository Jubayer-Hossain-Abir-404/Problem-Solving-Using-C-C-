#include<stdio.h>
int main()
{
    int width,height,length,volume;
    printf("Enter the value of width,height and length:");

    scanf("%d%d%d",&width,&height,&length);
    volume=width*height*length;
    printf("The actual volume is:%d",volume);
    return 0;
}

#include<stdio.h>
int main()
{
    int length,width;
    float nl,nw,x;
    scanf("%d",&length);
    scanf("%d",&width);
    nl=length/2.0;
    nw=width/2.0;
    x=nl*nw;
    printf("The required tiles is %f",x);
    return 0;
}

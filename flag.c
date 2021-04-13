#include<stdio.h>
int main()
{
    int length,height,nl,nh,nf;
    scanf("%d",&length);
    scanf("%d",&height);
    nl=floor(length/10);
    nh=floor(height/6);
    nf=nl*nh;
    printf("%d",nf);
    return 0;
}

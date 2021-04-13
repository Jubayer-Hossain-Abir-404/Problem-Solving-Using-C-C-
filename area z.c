#include<stdio.h>
int main()
{
    int length,width,nl,nw,required_tiles;
    printf("Enter the value of length and width:");
    scanf("%d",&length);
    scanf("%d",&width);
    nl=ceil(length/2.0);
    nw=ceil(width/2.0);
    required_tiles=nl*nw;
    printf("The required tiles is :%d",required_tiles);
    return 0;
}

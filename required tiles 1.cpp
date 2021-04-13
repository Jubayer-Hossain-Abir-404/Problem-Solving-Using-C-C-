#include<stdio.h>
#include<math.h>
int main()
{
    int length,width,area,required_tiles;
    printf("Give me the value of length and width:");
    scanf("%d",&length);
    scanf("%d",&width);
    area=length*width;

    required_tiles=ceil(area/4.0);
    printf("The required tiles is:%d",required_tiles);
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int length,width,required_tiles;
    scanf("%d%d",&length,&width);
    required_tiles=ceil((length*width)/100.0);
    printf("%d",required_tiles);
    return 0;

}

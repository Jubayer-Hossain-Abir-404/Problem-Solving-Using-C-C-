#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float len;
    printf("Please tell me the co-ordinates of those points:");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    len=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Actually the length is :%f",len);
    return 0;
}

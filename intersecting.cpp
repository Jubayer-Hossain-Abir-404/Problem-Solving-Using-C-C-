#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,ans1,ans2;
    printf("The co-ordinates of (x1,y1):");
    scanf("%d%d",&x1,&y1);
    printf("The co-ordinates of (x2,y2):");
    scanf("%d%d",&x2,&y2);
    ans1=x1*x2;
    ans2=y1*y2;
    if(ans1<0&&ans2<0)
    {
        printf(" Intersects XY-axis");
    }
    else
    {
        printf(" Does not intersect XY-axis");
    }


    return 0;

}

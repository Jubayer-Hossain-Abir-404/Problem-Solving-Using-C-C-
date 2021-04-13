#include<stdio.h>
int main()
{
    int x,y;
    printf("What are the co-ordinates of (x,y):");
    scanf("%d%d",&x,&y);
    if(x>0)
    {
        if(y>0)
        {
            printf("First Quadrant");
        }
        else
        {
            printf("Fourth Quadrant");
        }
    }
    else if(x<0)
    {
        if(y>0)
        {
            printf("Second Quadrant");
        }
        else
        {
            printf("Third Quadrant");
        }
    }
    else
    {
        printf("Center");
    }
    return 0;
}

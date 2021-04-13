#include<stdio.h>
int main()
{
    int x,y;
    printf("Plese enter the co-ordinates of (x,y):");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("This indicates the center point");
    else if(x>=0&&y>=0)
        printf("This indicates the first quadant");
    else if (x<=0&&y>=0)
        printf("This indicates the second quadrant ");
    else if(x<=0&&y<=0)
        printf("This indicates the third quadrant");
    else if(x>=0&&y<=0)
        printf("This indictes the fourth quadrant");
    else
        printf("Invalid Input");
    return 0;
}


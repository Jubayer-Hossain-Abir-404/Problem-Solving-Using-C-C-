#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Please Enter x,y:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("The point is in Region 1");
    }
    else if(x<0&&y>0)
    {
        printf("The point is in Region 2");
    }
    else if(x<0&&y<0)
    {
        printf("The point is in Region 3");
    }
    else if(x>0&&y<0)
    {
        printf("The point is in Region 4");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}

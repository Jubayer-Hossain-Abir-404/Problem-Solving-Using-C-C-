#include<stdio.h>
#include<math.h>
int main()
{
    int height,length,width,distance;
    float r,Pi,area_left;
    printf("Give me the value of height,length and width:");
    scanf("%d%d%d",&height,&length,&width);
    printf("What is the distance of the circle:");
    scanf("%d",&distance);
    if(distance<=height&&distance<=length&&distance<=width)
    {
        r=distance/2.0;
        printf("Pi=");
        scanf("%f",&Pi);
        area_left=(height*length*width)-(Pi*(r*r));
        printf("The box will hold the bos and the area will be left is:%.2f",area_left);
    }
    else
    {
        if(distance>height&&distance>length&&distance>width)
        {
            printf("The box will not hold the ball");
        }
        else if(distance>height)
        {
            printf("The box will not hold because of height");
        }
        else if(distance>length)
        {
            printf("The box will not hold because of length");
        }
        else
        {
            printf("The box will not hold because of width");
        }
    }
    return 0;
}

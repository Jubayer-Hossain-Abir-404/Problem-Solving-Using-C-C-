#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    printf("Give me the values:");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if(distance>=40)
    {
        printf("You are saved");
    }
    else if(distance<40&&distance>=20)
    {
        printf("YOu might be in trouble");
    }
    else
    {
        printf("You are doomed");
    }
    return 0;
}

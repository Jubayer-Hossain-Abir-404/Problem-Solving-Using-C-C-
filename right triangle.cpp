#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y,z;
    printf("Enter First side:");
    scanf("%f",&a);
    printf("Enter second side:");
    scanf("%f",&b);
    printf("Enter third side:");
    scanf("%f",&c);
    x=sqrt((a*a)+(b*b));
    y=sqrt((b*b)+(c*c));
    z=sqrt((c*c)+(a*a));
    if(c==x||a==y||b==z)
    {
        printf("Right Triangle");
    }
    else
    {
        printf("Not Right Triangle");
    }
    return 0;
}

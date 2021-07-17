#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,perimeter;
    printf("Give me the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        perimeter=3*a;
    }
    else if(a==b||b==c||c==a)
    {
        if(a==b)
        {
            perimeter=2*a+c;
        }
        else if(b==c)
        {
            perimeter=2*b+a;
        }
        else
        {
            perimeter=2*c+b;
        }
    }
    else
    {
        perimeter=a+b+c;
    }
    printf("The perimeter is:%d",perimeter);
    return 0;
}

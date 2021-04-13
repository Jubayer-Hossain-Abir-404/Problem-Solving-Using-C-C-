#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y;
    printf("Give me the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if((a!=0)&&(b*b-4*a*c>0))
    {
        x=(-b+sqrt(b*b-4*a*c))/(2*a);
        y=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("The value of x and y are:%.2f %.2f",x,y);
    }
    else if(a==0)
    {
        x=-c/b;
        printf("The only value we found is x:%.2f",x);
    }
    else
    {
        printf("Does not exist because it's a complex number");
    }
    return 0;
}


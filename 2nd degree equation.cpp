#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y;
    printf("Give me the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        x=-c/b;
        printf("Only value I can find out is:%.2f",x);
    }
    else if(b*b-4*a*c<0)
    {
        printf("Does not exist because it will turn out to be a complex number");
    }
    else
    {
        x=(-b+sqrt(b*b-4*a*c))/(2*a);
        y=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("The value of x and y:%.2f %.2f",x,y);

    }
    return 0;
}

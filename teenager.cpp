#include<stdio.h>
#include<math.h>
int main()
{
    int age,x,y;
    printf("What's your age:");
    scanf("%d",&age);
    if(age<13)
    {
        x=13-age;
        printf("%d",x);

    }
    else if(age>19)
    {
        y=age-19;
        printf("%d",y);
    }
    else
    {
        printf("teenager");
    }
    return 0;
}

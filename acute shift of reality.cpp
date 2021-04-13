#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("What are the angles:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<90&&b<90&&c<90)
    {
        printf("It's an acute angle");
    }
    else if((a>90&&b>90&&c>90)||(a>90&&b>90)||(b>90&&c>90)||(c>90&&a>90))
    {
        printf("It's not a triangle");
    }
    else if((a==90&&b==90&&c==90)||(a==90&&b==90)||(b==90&&c==90)||(c==90&&a==90))
    {
        printf("It's not a triangle");
    }
    else if(a>90||b>90||c>90)
    {
        printf("It's an obtuse angle");
    }
    else if(a==90||b==90||c==90)
    {
        printf("It's a right angle");
    }
    return 0;

}

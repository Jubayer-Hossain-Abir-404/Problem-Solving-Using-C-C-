#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("A=%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("B=%d",b);
    }
    else
    {
        printf("C=%d",c);
    }
    return 0;
}


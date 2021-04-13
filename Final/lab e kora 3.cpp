#include<stdio.h>
#include<math.h>
int main()
{
    int b,a;
    int c=0;
    printf("The value:");
    scanf("%d",&b);
    printf("The base:");
    scanf("%d",&a);
    while(b!=0)
    {
        b=b/a;
        c++;
    }
    printf("The ans:%d",c);
    return 0;
}

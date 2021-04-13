#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float ratio;
    printf("Enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((c-d)==0)
    {
        printf("It cannot be divided and the result will be undefined");
    }
    else
    {
        ratio=(a-b)/(float)(c-d);
        printf("The ratio is :%.2f",ratio);
    }
    return 0;
}

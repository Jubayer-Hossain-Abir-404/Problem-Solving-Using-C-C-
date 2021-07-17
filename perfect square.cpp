#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float aftermath,aftermath1,aftermath2;
    printf("Print any number:");
    scanf("%d",&n);
    aftermath=sqrt(n);
    aftermath1=ceil(aftermath);
    aftermath2=floor(aftermath);
    if(aftermath1==aftermath2)
    {
        printf("%d is a perfect square",n);
    }
    else
    {
        printf("Not a perfect square");
    }
    return 0;
}


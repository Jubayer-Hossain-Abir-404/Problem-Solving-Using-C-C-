#include<stdio.h>
int main()
{
    int a,b,x,y;
    int result;
    printf("Enter the values:");
    scanf("%d%d%d%d",&a,&b,&x,&y);
    result=(a*b)+(x*y);
    printf("The result is %d",result);
    return 0;
}

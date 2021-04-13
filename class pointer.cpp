#include<stdio.h>
int test(int *x,int *y)
{
    int ans;
    *x=*x+5;
    *y=*y+3;
    ans=*x+*y;
    return ans;
}
int main()
{
    int a,b,p;
    printf("The values:");
    scanf("%d%d",&a,&b);
    p=test(&a,&b);
    printf("a:%d\n",a);
    printf("%b:%d\n",b);
    printf("Sum:%d",p);
    return 0;
}

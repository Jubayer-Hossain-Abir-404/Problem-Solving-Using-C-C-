#include<stdio.h>
int maximum(int x,int y)
{
    int higher;
    if(x>y)
    {
        higher=x;
    }
    else
    {
        higher=y;
    }
    return higher;
}
int main()
{
    int a,b;
    printf("The values:");
    scanf("%d%d",&a,&b);
    printf("Max is %d",maximum(a,b));
    return 0;
}

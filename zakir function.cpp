#include<stdio.h>
int square(int num);
int main()
{
    int a;
    printf("The value:");
    scanf("%d",&a);
    printf("Square is:%d",square(a));
    return 0;
}
int square(int num)
{
    return num*num;
}

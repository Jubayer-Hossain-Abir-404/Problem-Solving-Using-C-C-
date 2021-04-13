#include<stdio.h>
void square(int *pa)
{
    *pa=*pa * *pa;
    printf("*pa=%d\n",*pa);
}
int main()
{
    int a=10;
    square(&a);
    printf("a=%d",a);
    return 0;
}

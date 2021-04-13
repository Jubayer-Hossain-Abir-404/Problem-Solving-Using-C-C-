#include<stdio.h>
int main()
{
    int a=13;
    int *p;
    p=&a;
    printf("Address of a:%d\n",&a);
    printf("Address of p:%d\n",p);
    printf("Value of a:%d\n",a);
    printf("value of p:%d",*p);
    return 0;
}


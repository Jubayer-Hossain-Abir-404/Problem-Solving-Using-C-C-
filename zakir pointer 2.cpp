#include<stdio.h>
int main()
{
    int a=5;
    int *ip;
    ip=&a;
    printf("Address of a variable:%d\n",&a);
    printf("Address stored in ip variable:%d",*ip);
    return 0;
}

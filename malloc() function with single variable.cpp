#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(1*sizeof(int));
    *p=23;
    printf("Value:%d",*p);
    return 0;
}

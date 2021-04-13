#include<stdio.h>
int *maximum(int *pa,int *pb)
{
    if(*pa>*pb)
    {
        return pa;
    }
    else
    {
        return pb;
    }
}
int main()
{
    int a=23,b=14,*p;
    p=maximum(&a,&b);
    printf("Maximum=%d",*p);
    return 0;
}


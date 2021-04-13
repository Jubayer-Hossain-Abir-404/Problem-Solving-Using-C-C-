#include<stdio.h>
void swaped(int *p,int *q);
int main()
{
    int x=10;
    int y=20;
    printf("Value of X and Y before swapping are X=%d and Y=%d\n",x,y);
    swaped(&x,&y);
    printf("Value of X and Y after swapping are X=%d and Y=%d",x,y);
    return 0;
}
void swaped(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
}


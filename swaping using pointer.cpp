#include<stdio.h>
int main()
    {
        int a,b;
        int *x,*y,t;
        printf("Enter the value:");
        scanf("%d%d",&a,&b);
        x=&a;
        y=&b;
        t=*x;
        *x=*y;
        *y=t;
        printf("X:%d\nY:%d",*x,*y);
        return 0;

    }

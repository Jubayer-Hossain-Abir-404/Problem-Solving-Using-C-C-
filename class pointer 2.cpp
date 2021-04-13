#include<stdio.h>
int test(int *a,int n)
{
    int s=0,i;
    for(i=0; i<n; i++)
    {
        *a=*a+10;
        s=s+(*a);
        a=a+1;
    }
    return s;
}
int main()
{
    int x[10];
    int p,i,g;
    printf("How many times:");
    scanf("%d",&g);
    printf("The values:");
    for(i=0; i<g; i++)
    {
        scanf("%d",&x[i]);
    }
    p=test(x,g);
    printf("Ans:%d",p);
    return 0;
}

#include<stdio.h>
int sum(int *t,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+(*t);
        t=t+1;
    }
    return s;
}
int main()
{
    int *p;
    int i,n;
    printf("How many times:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p=(int *)Malloc(n*sizeof(int));
        p=p+1;
    }
    sum(p,n);
    printf("Sum:%d",sum(p,n));
    return 0;
}

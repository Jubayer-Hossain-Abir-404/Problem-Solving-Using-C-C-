#include<stdio.h>
void FindSumAvg(int *t,int n,int *p,float *q)
{
    int s=0,i;
    float avg;
    for(i=0;i<n;i++)
    {
        s=s+(*t);
        t=t+1;
    }
    avg=s/(float)n;
    *p=s;
    *q=avg;
    return;
}
int main()
{
    int x[100],n,i,a;
    float b;
    printf("How many times:");
    scanf("%d",&n);
    printf("The values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    FindSumAvg(x,n,&a,&b);
    printf("Sum:%d\n",a);
    printf("Average:%.2f",b);
    return 0;
}

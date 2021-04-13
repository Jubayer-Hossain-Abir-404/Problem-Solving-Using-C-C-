#include<stdio.h>
float FindAverage(int *p,int q)
{
    int i,s=0;
    float a;
    for(i=0;i<q;i++)
    {
        s=s+p[i];
    }
    a=s/q;
    return a;
}
int main()
{
    int x[100],i,n;
    float avg;
    printf("How many times:");
    scanf("%d",&n);
    printf("The values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    avg=FindAverage(x,n);
    printf("The average:%.2f",avg);
    return 0;
}

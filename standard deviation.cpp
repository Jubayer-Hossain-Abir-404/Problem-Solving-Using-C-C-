#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,n,deviation;
    float mean,variance,standard_deviation;
    int sum=0;
    int sumsqr=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+x[j];
    }
    mean=sum/n;
    printf("Mean:%.2f",mean);
    for(k=0;k<n;k++)
    {
        deviation=x[k]-mean;
        sumsqr=sumsqr+(deviation*deviation);
    }
    variance=sumsqr/n;
    printf("Variance:%.2f\n",variance);
    standard_deviation=sqrt(variance);
    printf("Standard Deviation:%.2f\n",standard_deviation);

}

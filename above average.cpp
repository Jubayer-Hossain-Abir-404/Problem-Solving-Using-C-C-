#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    int a[100];
    float sum=0;
    int c=0;
    float average;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("The numbers:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average=(float)sum/n;
    printf("The average:%.2f\n",average);
    if(a[n-1]>average)
    {
        printf("This last number is above average:%d",a[n-1]);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    float a[100];
    int c=0;
    float sum=0;
    float average,h,l;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The points are:");
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum:%.2f\n",sum);
    average=(float)sum/n;
    printf("Average:%.2f\n",average);
    h=average-0.1;
    l=average+0.1;
    for(j=0;j<n;j++)
    {
        if(a[j]>h||a[j]<l)
        {
            c++;
        }
    }
    printf("The counted number is:%d",c);
    return 0;

}

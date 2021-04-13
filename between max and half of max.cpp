#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    int c=0;
    float a[100];
    float maximum,half_of_max;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The numbers:");
        scanf("%f",&a[i]);
    }
    maximum=a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]>maximum)
        {
           maximum=a[j];
        }
    }
    printf("Maximum:%.2f\n",maximum);
    half_of_max=(float)maximum/2;
    printf("Half of max:%.2f\n",half_of_max);
    for(k=0;k<n;k++)
    {
        if(a[k]<maximum&&a[k]>half_of_max)
        {
            c++;
        }
    }
    printf("These numbers are between max and half of max:%d",c);
    return 0;

}

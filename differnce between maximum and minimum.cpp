#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,j,k,n;
    int maximum,minimum,difference;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The numbers:");
        scanf("%d",&a[i]);

    }
    maximum=a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]>maximum)
        {
            maximum=a[j];
        }
    }
    printf("Maximum:%d\n",maximum);
    minimum=a[0];
    for(k=1;k<n;k++)
    {
        if(a[k]<minimum)
        {
            minimum=a[k];
        }
    }
    printf("Minimum:%d\n",minimum);
    difference=maximum-minimum;
    printf("The difference between maximum and minimum is:%d",difference);
    return 0;
}

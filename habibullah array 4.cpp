#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,j,n;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            a[i]=i;
        }
        else if(i==1)
        {
            a[i]=i;
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%d ",a[i]);
    }
    return 0;
}

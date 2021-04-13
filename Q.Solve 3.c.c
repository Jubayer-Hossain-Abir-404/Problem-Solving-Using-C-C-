#include<stdio.h>
int main()
{
    int a[100],index,n,largest;
    printf("\nTotal number of elements in the array:\n");
    scanf("%d",&n);
    printf("\nEnter %d integers:",n);
    for(index=0;index<n;index++)
    {
        scanf("%d",&a[index]);
    }
    largest=a[0];
    for(index=1;index<n;index++)
    {
        if(a[index]>largest)
        {
            largest=a[index];
        }
    }
    printf("\nLargest number:%d",largest);
    return 0;
}

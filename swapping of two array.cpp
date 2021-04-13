#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],b[100],c[100];
    int i,j,k,d,n,z;
    printf("The value of n:");
    scanf("%d",&n);
    printf("First arrays-->\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Second arrays-->\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
        c[k]=a[k];
        a[k]=b[k];
        b[k]=c[k];
    }
    printf("After swapping first arrays are  \n");
    for(d=0;d<n;d++)
    {
        printf("%d ",a[d]);
    }
    printf("\nAfter swapping second arrays are  \n");
    for(z=0;z<n;z++)
    {
        printf("%d ",b[z]);
    }
    return 0;
}

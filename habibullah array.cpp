#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,j,n,smallest;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("num_element:");
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]<smallest)
        {
            smallest=a[j];
        }
    }
    printf("The smallest number is:%d",smallest);
    return 0;


}

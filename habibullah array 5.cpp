#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,j,n,biggest;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("num_element:");
        scanf("%d",&a[i]);
    }
    biggest=a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]>biggest)
        {
            biggest=a[j];
        }
    }
    printf("The biggest number is:%d",biggest);
    return 0;


}


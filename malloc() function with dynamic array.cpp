#include<stdio.h>
#include<malloc.h>
int main()
{
    int *p;
    int i,n,sum;
    printf("Enter Number of terms:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter Value:");
        scanf("%d",(p+i));
    }
    printf("Values are:");
    sum=0;
    for(i=0;i<n;i++)
    {
        printf("%d   ",*(p+i));
        sum=sum+*(p+i);
    }
    printf("\nSum of elements:%d",sum);
    return 0;
}

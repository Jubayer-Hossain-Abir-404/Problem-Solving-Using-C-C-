#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,n,element,position;
    printf("The value of n:");
    scanf("%d",&n);
    printf("The elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The element you want to insert:");
    scanf("%d",&element);
    printf("The position you want to insert your element:");
    scanf("%d",&position);
    for(j=n;j>position;j--)
    {
        x[j]=x[j-1];
    }
    x[position]=element;
    n++;
    printf("After inserting a new element :\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",x[k]);
    }
    return 0;
}

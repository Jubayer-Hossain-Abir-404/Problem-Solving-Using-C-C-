#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,m,swaped,l,element;
    int x[100];
    int p=0;
    printf("How many time:");
    scanf("%d",&n);
    printf("The elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(x[k]<x[k+1])
            {
                swaped=x[k];
                x[k]=x[k+1];
                x[k+1]=swaped;
            }
        }
    }
    printf("The ascending order \n");
    for(l=0;l<n;l++)
    {
        printf("%d",x[l]);
    }
    printf("\nThe element I want to search:\n");
    scanf("%d",&element);
    for(m=0;m<n;m++)
    {
        if(x[m]==element)
        {
            p=m+1;
            printf("%d is found in %d place",element,p);
        }
    }
    return 0;

}

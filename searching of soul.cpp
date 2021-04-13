#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int y[100];
    int i,j,k,n,item;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The elements are:");
        scanf("%d",&x[i]);
    }
    printf("The item I want to search:");
    scanf("%d",&item);
    for(j=0;j<n;j++)
    {
        if(x[j]==item)
        {
            y[c]=j+1;
            c++;
        }
    }
    if(c!=0)
    {
        printf("This item is found     ");
        for(k=0;k<c;k++)
        {
            printf("%d ",y[k]);
        }
    }
    else if(c==0)
    {
        printf("Item not found");
    }
    return 0;
}

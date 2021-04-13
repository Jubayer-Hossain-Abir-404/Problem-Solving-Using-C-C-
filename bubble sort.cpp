#include<stdio.h>
#include<math.h>
int main()
{
    int x[10];
    int y[10];
    int i,j,k,a,n,maximum,p;
    printf("The value of n:");
    scanf("%d",&n);
    printf("The elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    maximum=x[0];
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(x[k]>maximum)
            {
                maximum=x[k];
                p=k;
            }
            y[j]=maximum;
            x[p]=-100;
            maximum=x[p];
        }
    }
        printf("The order is:\n");
        for(a=0;a<n;a++)
        {
            printf("%d\n",y[a]);
        }
        return 0;
}

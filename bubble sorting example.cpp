#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,m,n,swaped;
    printf("How many times:");
    scanf("%d",&n);
    printf("The elements are  \n");
    for(m=0;m<n;m++)
    {
        scanf("%d",&x[m]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swaped=x[j];
                x[j]=x[j+1];
                x[j+1]=swaped;
            }
        }
    }
    printf("After sorting   \n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",x[k]);
    }
    return 0;
}

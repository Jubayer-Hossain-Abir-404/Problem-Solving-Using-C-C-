#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,m,n;
    int c=0;
    int d=0;
    int e=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("The numbers are:");
        scanf("%d",&x[i]);
    }
    for(j=0; j<n; j++)
    {
        if(x[j]>0)
        {
            c++;
        }
    }
    printf("The positive numbers are:%d\n",c);
    for(k=0; k<n; k++)
    {
        if(x[k]<0)
        {
            d++;
        }
    }
    printf("The negative numbers are:%d\n",d);
    for(m=0; m<n; m++)
    {
        if(x[m]==0)
        {
            e++;
        }
    }
    printf("The numbers which are zero:%d\n",e);
    return 0;
}

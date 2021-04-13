#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int y[100];
    int z[100];
    int i,j,k,n;
    printf("The value of n:");
    scanf("%d",&n);
    printf("A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("B:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&y[j]);
    }
    printf("The sum of two array is  \n");
    for(k=0;k<n;k++)
    {
        z[k]=x[k]+y[k];
        printf("%d\n",z[k]);
    }
    return 0;
}

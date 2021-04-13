#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    int s=0;
    int z=0;
    int x[100];
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        printf("The value of x:");
        scanf("%d",&x[i]);
        s=s+x[i];
    }
    printf("The value of s:%d\n",s);
    for(j=(n/2)+1;j<n;j++)
    {
        printf("The value of x:");
        scanf("%d",&x[j]);
        z=z+x[j];
    }
    printf("The value of z:%d\n",z);
    if(s>z)
    {
        printf("The first half contains more than second half");
    }
    else
    {
        printf("The second half contains more than first half");
    }
    return 0;
}

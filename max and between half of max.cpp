#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,n,maximum;
    int c=0;
    float half_max;
    printf("How many times:");
    scanf("%d",&n);
    printf("The elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    maximum=x[0];
    for(j=0;j<n;j++)
    {
        if(x[j]>maximum)
        {
            maximum=x[j];
        }
    }
    printf("Max:%d\n",maximum);
    half_max=maximum/2.0;
    printf("Half of max:%.2f",half_max);
    for(k=0;k<n;k++)
    {
        if(x[k]>half_max&&x[k]<maximum)
        {
            c++;
        }
    }
    printf("The counted numbers which are between max and half of max %d",c);
    return 0;
}

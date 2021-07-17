#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    int x[100];
    int maximum;
    int c=0;
    printf("How many times:");
    scanf("%d",&n);
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
    for(k=0;k<n;k++)
    {
        if(x[k]==maximum)
        {
            c++;
        }
    }
    if(c>1)
    {
        printf("This is the maximum one %d and it has appeared %d time",maximum,c);
    }
    else
    {
        printf("The maximum:%d",maximum);
    }
    return 0;
}

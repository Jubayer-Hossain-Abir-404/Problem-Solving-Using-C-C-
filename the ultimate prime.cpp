#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    int x[100];
    printf("How many times:");
    scanf("%d",&n);
    printf("The values are:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0; j<n; j++)
    {
        for(k=2; k<x[j]/2; k++)
        {
            if(x[j]%k==0)
            {
                printf("%d is a prime number\n",x[j]);
                break;
            }
            else
            {
                printf("%d is  not a prime number\n",x[j]);
                break;
            }
        }
        continue;

    }
    return 0;
}

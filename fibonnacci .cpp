#include<stdio.h>
#include<math.h>
int main()
{
    int first=0;
    int second=1;
    int fibbo,i,n;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            fibbo=i;
        }
        else{

            fibbo=first+second;
            first=second;
            second=fibbo;
        }

        printf("%d ",fibbo);
    }
    return 0;
}

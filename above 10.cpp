#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The value of x:");
        scanf("%d",&x);
        if(x>10)
        {
            c++;
        }
    }
    printf("The number of which is bigger than 10:%d",c);
    return 0;
}


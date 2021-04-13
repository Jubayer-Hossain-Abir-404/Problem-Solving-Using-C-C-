#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,n,x;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The number is:");
        scanf("%d",&x);
        for(a=2;a<x;a++)
        {
            if(x%a==0)
            {
                c++;
                break;
            }
        }
        if(c==1)
        {
            printf("Not Prime\n");
        }
        else if(c==0)
        {
            printf("Prime\n");
        }
        c=0;
    }
    return 0;
}

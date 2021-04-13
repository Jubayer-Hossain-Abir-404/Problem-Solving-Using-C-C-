#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x;
    float aftermath;
    printf("The number is:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The x is:");
        scanf("%d",&x);
        aftermath=sqrt(x);
        if(x/aftermath==aftermath)
        {
            printf("It's a perfect square\n");
        }
        else
        {
            printf("It's not a perfect square\n");
        }

    }
    return 0;
}

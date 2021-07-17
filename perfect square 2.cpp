#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x;
    float aftermath,aftermath1,aftermath2;
    printf("The n is:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The x is:");
        scanf("%d",&x);
        aftermath=sqrt(x);
        printf(" After root:%.2f\n",aftermath);
        aftermath1=ceil(aftermath);
        aftermath2=floor(aftermath);
        if(aftermath1==aftermath2)
        {
            printf("Number is a perfect square\n");
        }
        else
        {
            printf("Number is not a perfect square\n");
        }
    }
    return 0;

}

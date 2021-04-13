#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<=4;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

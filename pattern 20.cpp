#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k>1;k--)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");




        }
        if(i%2==0)
        {
            printf("Blank Line");

        }

        printf("\n");

    }
    return 0;
}

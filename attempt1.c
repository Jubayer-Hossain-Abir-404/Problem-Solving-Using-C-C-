#include<stdio.h>
int main()
{
    int i=1,j,n;
    int sum=0;
    scanf("%d",&n);
    while(i<=n)

    {
        for(j=1;j<=i;j++)
        {
            sum=sum+1;


            printf("*");


        }
        i++;
        printf("\n");
    }

}

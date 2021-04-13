#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Enter a number which one's prime number you want to see:");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                printf(" %d ",i);
        }


    }
    return 0;
}

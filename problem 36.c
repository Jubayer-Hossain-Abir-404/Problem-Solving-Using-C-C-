#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of N:");
    scanf("%d",&n);
    while(1)
    {
        if(n==-1)
        {
            continue;
        }


        else if(n>-32)
        {
            for(i=n; i>=-32; i--)
                printf("%d\n",i);
        }
        else
        {
            for(i=n; i<=-32; i++)
                printf("%d\n",i);
        }
    }
    return 0;
}

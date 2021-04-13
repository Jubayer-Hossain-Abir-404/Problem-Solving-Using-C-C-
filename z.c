#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the numbers between N to -32[except for -1]:");
    scanf("%d",&n);
    while(n==-1)

        break;




        if(n>=-32)
        {
            for(i=n; i>=-32; i--)

                printf("%d\n",i);

        }
        else
        {
            for(i=n; i<=-32; i++)

                printf("%d\n",i);

        }




    return 0;
}

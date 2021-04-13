#include<stdio.h>
int main()
{
    int n,i;


        printf("\nEnter the value of N[input -1 to stop]:\n");
        scanf("%d",&n);
        while(n==-1)
            break;
         if(n>-32)
        {
            for(i=n;i>=-32;i--)
                printf("%d\n",i);
        }
        else
        {
            for(i=n;i<=-32;i++)
                printf("%d\n",i);
        }

    return 0;
}

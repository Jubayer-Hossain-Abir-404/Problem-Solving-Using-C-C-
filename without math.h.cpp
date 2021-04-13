#include<stdio.h>
int main()
{
    int i,n;
    int count=0;
    printf("The n is:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if((i*i)==n)
        {
            count++;
            printf("%d is the root of %d\n",i,n);
            printf("& It's a perfect square");
            break;

        }

    }
    if(count==0)
    {
        printf("It's not a perfect square ");
    }
    return 0;
}

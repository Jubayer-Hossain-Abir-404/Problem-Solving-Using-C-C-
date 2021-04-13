#include<stdio.h>
int main()
{
    int n,first=0,second=1;
    printf("Enter the limit N:");
    scanf("%d",&n);
    while(first<=n)
    {
        printf("%d\n",first);
        int temp=first;
        first=second;

        second=second+temp;

    }
    return 0;
}

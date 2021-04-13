#include<stdio.h>
int main()
{
    int n;
    int first=0;
    int second=1;
    printf("Enter the value of N:");
    scanf("%d",&n);
    while(first<=n)
    {
        int temp=first;
        printf(" %d ",first);
        first=second;
        second=second+temp;
    }
    return 0;
}

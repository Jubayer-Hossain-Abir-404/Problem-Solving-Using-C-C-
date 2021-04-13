#include<stdio.h>
int printInt(int k)
{
    if(k==0)
    {
        return 0;
    }
    printf("%d\n",k);
    printInt(k-1);
}
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    printInt(i);
    return 0;
}

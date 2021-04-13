#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("This number is an EVEN number");
    else
        printf("This is an odd number");
    return 0;
}

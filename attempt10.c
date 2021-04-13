#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
        printf("Yes");
    else
        printf("Not");
    return 0;
}

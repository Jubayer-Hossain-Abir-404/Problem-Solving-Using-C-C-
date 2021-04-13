#include<stdio.h>
int palindrome(int m)
{
    int rev=0;
    int temp;
    temp=m;
    while(m>0)
    {
        rev=rev*10+m%10;
        m=m/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(palindrome(n)==1)
    {
        printf("%d is a palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    }
    return 0;
}

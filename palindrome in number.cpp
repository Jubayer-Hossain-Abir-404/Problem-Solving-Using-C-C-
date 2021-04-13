#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a;
    int c=0;
    int x[100];
    printf("How many times:");
    scanf("%d",&n);
    printf("The series:\n");
    for(a=0;a<n;a++)
    {
        scanf("%d",&x[a]);
    }
    for(i=0;i<n/2;i++)
    {
        if(x[i]==x[n-1-i])
        {
            c++;
        }
    }
    if(c==n/2)
    {
        printf("This is a palindrome series of number");
    }
    else
    {
        printf("This is not a palindrome");
    }
    return 0;
}

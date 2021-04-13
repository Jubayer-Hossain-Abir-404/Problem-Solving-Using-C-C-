#include<stdio.h>
#include<string.h>
int main()
{
    int  x,y;
    int *p1,*p2;
    int i,flag=0,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("Enter first string:");
    scanf("%d",&x);
    printf("Enter second string:");
    scanf("%d",&y);
    p1=&x;
    p2=&y;
    i=0;
    while(i<n)
    {
        if(*p1==*p2)
        {
            p1++;
            p2++;
        }
        else
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("Strings are same");
    }
    else
    {
        printf("Strings are not same");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char a,b;
    printf("What are the characters:");
    scanf("%c %c",&a,&b);
    if(a+1==b||a-1==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

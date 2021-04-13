#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20];
    int p,q;
    printf("The first word:");
    gets(x);
    p=strlen(x);
    printf("The second word:");
    gets(y);
    q=strlen(y);
    if(p>q)
    {
        printf("The first one is a bigger word");
    }
    else if(p<q)
    {
        printf("The second one is a bigger word");
    }
    else if(p==q)
    {
        printf("The word's size is the same");
    }
    return 0;
}

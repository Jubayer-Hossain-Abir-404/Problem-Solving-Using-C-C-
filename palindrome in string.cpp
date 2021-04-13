#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,h;
    int c=0;
    char x[12];
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p/2;i++)
    {
        if(x[i]==x[p-i-1])
        {
            c++;
        }
    }
    printf("c:%d\n",c);
    h=p/2;
    printf("h:%d\n",h);
    if(c==h)
    {
        printf("This is a palindrome");
    }
    else
    {
        printf("This is not a palindrome");
    }
    return 0;

}

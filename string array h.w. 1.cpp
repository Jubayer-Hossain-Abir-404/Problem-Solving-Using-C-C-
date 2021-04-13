#include<stdio.h>
#include<string.h>
int main()
{
    char x[10],y[10];
    int i=0,p,q;
    int c=0;
    printf("The first word:");
    gets(x);
    p=strlen(x);
    printf("The second word:");
    gets(y);
    q=strlen(y);
    while(x[i]!='\0')
    {
        if(x[i]==y[i])
        {
            c++;
        }
        else
        {
            break;
        }
        i++;
    }
    if(c==p&&c==q)
    {
        printf("The words are same");
    }
    else
    {
        printf("The words are not same");
    }
    return 0;

}

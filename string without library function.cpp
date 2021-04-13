#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20];
    int i=0,ret;
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    while(x[i]!='\0'||y[i]!='\0')
    {
        ret=x[i]-y[i];
        if(ret>0||ret<0)
        {
            break;
        }
        i++;
    }
    if(ret<0)
    {
        printf("The first word %s is less than second word %s but would appear before",x,y);
    }
    else if(ret>0)
    {
        printf("The first word %s is greater than the the second word  %s but would appear later",x,y);
    }
    else
    {
        printf("First word is equal to second word");
    }
    return 0;
}

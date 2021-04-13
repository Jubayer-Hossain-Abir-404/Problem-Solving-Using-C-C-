#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20],t;
    int i=0,p=0,c=0;
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    while(x[i]!='\0')
    {
        i++;
        c++;
    }
    p=i;
    i=0;
    while(y[i]!='\0')
    {
        t=x[p];
        x[p]=y[i];
        y[i]=t;
        i++;
        p++;
        c++;
    }
    for(i=0;i<c;i++)
    {
        printf("%c",x[i]);
    }
    return 0;
}

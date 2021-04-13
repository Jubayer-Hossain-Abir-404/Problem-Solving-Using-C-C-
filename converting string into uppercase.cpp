#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    int i,p;
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            x[i]=x[i]-32;
        }
    }
    printf("%s",x);
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    char x[12];
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
        else if(x[i]>='a'&&x[i]-32)
        {
            x[i]=x[i]-32;
        }
        else if(x[i]==' ')
        {
            continue;
        }
    }
    printf("%s",x);
    return 0;
}

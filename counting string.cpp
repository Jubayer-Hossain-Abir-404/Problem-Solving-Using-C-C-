#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,c=1;
    char x[12];
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]==' ')
        {
            c++;
        }
    }
    printf("The number of words:%d",c);
    return 0;
}

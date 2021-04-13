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
        printf("%c\t%d\n",x[i],x[i]);
    }
    return 0;
}

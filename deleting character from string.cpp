#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,j;
    char d;
    char x[12];
    char y[12];
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    printf("The character I want to delete:");
    scanf("%c",&d);
    for(i=0; i<p; i++)
    {
        if(x[i]==d)
        {
            y[i]=x[i];
        }
    }
    for(j=0;j<p;j++)
    {
        if(x[j]!=y[j])
        {
            printf("%c",x[j]);

        }
    }
    return 0;
}

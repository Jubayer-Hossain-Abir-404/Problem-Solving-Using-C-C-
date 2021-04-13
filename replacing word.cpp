#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i,p;
    char r,n;
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    fflush(stdin);
    printf("The character I want to replace:\n");
    scanf("%c",&r);
    fflush(stdin);
    printf("The new character I want to enter:\n");
    scanf("%c",&n);
    for(i=0;i<p;i++)
    {
        if(x[i]==r)
        {
            x[i]=n;
        }
    }
    printf("%s",x);
    return 0;

}

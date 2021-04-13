#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,j;
    char word;
    char x[10],y[10];
    printf("The word:");
    gets(x);
    p=strlen(x);
    printf("The character I want to delete:");
    scanf("%c",&word);
    for(i=0;i<p;i++)
    {
        if(x[i]!=word)
        {
            printf("%c",x[i]);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,p,j,k;
    char x[12];
    printf("The word:\n");
    gets(x);
    p=strlen(x);
    for(i=p-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }
    return 0;
}

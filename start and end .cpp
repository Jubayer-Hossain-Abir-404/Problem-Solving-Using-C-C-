#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int p;
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    if(x[0]==x[p-1])
    {
        printf("Yes,it starts with same letter");
    }
    else
    {
        printf("It does not");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    char x[100];
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p-1;i++)
    {
        if(x[i]==x[i+1])
        {
            x[i+1]=*;
        }
    }
    printf("After %s",x);
    return 0;
}


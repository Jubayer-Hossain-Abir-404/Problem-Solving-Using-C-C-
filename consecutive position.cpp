#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i,p;
    int c=0;
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p-1;i++)
    {
        if(x[i]==x[i+1])
        {
            c++;
        }
    }
    printf("The number of times:%d",c);
    return 0;
}

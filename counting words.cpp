#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    int c=1;
    char x[40];
    printf("Enter a string:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]=='')
        {
            c++;
        }
    }
    printf("Total words:%d",c);
    return 0;
}

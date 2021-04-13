#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,element;
    char x[25];
    char y[25];
    int c=0;
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(x[i]==x[j])
            {
                c++;
            }
        }
        printf("%c=%d\n",x[i],c);
        c=0;
        y[i]=x[i];
    }
    return 0;
}


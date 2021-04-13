#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,swaped;
    char x[15];
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    for(i=0;i<p-1;i++)
    {
        for(j=0;j<p-1;j++)
        {
            if(x[i]>x[i+1])
            {
                swaped=x[i];
                x[i]=x[i+1];
                x[i+1]=swaped;
            }
        }
    }
    printf("%s",x);
    return 0;
}

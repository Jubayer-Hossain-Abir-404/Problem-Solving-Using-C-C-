#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    int c=0;
    char x[100];
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p-1;i++)\
    {
        if(x[0]==x[i+1])
        {
            c++;
        }
    }
    printf("The number of times:%d",c);
    return 0;
}

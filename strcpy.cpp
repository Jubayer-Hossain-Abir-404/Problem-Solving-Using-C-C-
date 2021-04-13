#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20],swaped;
    int i=0,c=0;
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    while(y[i]!=NULL)
    {
        swaped=x[i];
        x[i]=y[i];
        i++;
        c++;
    }
    printf("%s\n",x);
    printf("%s",y);
    return 0;
}

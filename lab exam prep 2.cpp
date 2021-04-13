#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20];
    int ret;
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    ret=strcmp(x,y);
    if(ret==0)
    {
        printf("The words are same");
    }
    else
    {
        printf("The words are not same");
    }
    return 0;
}

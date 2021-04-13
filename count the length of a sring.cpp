#include<stdio.h>
#include<string.h>
int main()
{
    char *name;
    int length;
    char *cptr=name;
    name="DELHI";
    printf("%s",name);
    while(*cptr!='\0')
    {
        printf("%c is stored at address %u\n",*cptr,cptr);
        cptr++;
    }
    length=cptr-name;
    printf("Length of the string=%d",length);
    return 0;
}

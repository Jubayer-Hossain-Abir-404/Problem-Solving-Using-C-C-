#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Hello";
    char string2[]="World";
    strcpy(string1,string2);
    printf("%s\n",string1);
    printf("%s\n",string2);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[25];
    int len;
    char *ps;
    printf("Enter the string:");
    gets(s1);
    ps=(char*)malloc((len+1)*sizeof(int));
    strcpy(ps,s1);
    printf("ps=%s",ps);
    return 0;
}

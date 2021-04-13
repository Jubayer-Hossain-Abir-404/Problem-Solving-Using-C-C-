#include<stdio.h>
#include<string.h>
int main()
{
    char x[20],y[20];
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    strcat(x,y);
    printf("%s",x);
    return 0;
}

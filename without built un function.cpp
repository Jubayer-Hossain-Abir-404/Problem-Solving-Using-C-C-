#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char x[10];
    printf("The word:\n");
    scanf("%s",x);
    while(x[c]!='\0')
    {
        c++;
    }
    printf("The length of character:%d",c);
    return 0;
}

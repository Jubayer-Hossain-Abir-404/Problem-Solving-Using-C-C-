
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int reversit()
{
    char str[1000];
    int len, i;
    printf("\n Type anything!!! :\n");
    gets(str);
    printf("\nYou wrote:\n");
    puts(str);
    len=strlen(str);
    printf("\n%d characters! \n", len);
    printf("\nReversed:\n");
    for(i=len; i>=0; --i)
    {
        printf("%c", str[i]);

    }
    return 0;


}

int main()
{
printf("%d", reversit());
return 0;
}

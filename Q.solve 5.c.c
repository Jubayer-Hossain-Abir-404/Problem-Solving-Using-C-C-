#include<stdio.h>
#include<string.h>

int main(void)
{
    int i;
    char str1[10]={"abcd efgh"};
    char str2[12]={"ijklm nopqr"};
    printf("\n%d", strlen(str1));
    printf("\n%d", strlen(str2));
    printf("\n");

    for(i=0; i<(strlen(str1)); i++)
    printf("%c", str1[strlen(str1)-i]);
        printf("\n");
        strcat(str2, str1);

    for(i=0; i<(strlen(str2)); i++)
    printf("%c", str2[strlen(str2)-i]);
        printf("\n%d", strlen(strcat(str1,str2)));
        printf("\n%d", strcmp(str1,str2));
        strcpy(str1,str2);
        printf("\n%s", strcpy(str1,str2));


}


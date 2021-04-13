#include<stdio.h>
#include<string.h>

void reverseit(char a[])
{
    int i, j;
    int len=strlen(a);
    char temp;
    for(i=0, j=len-1; i<(len/2); i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(i=0; i<len; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    char ch[10];
    //scanf("%[^\n]s", ch);
    gets(ch);
    reverseit(ch);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int c[26]={0},i=0,p,maximum;
    printf("Enter a word:");
    gets(x);
    while(x[i]!='\0')
    {
        c[x[i]-'a']++;
        i++;
    }
    maximum=c[0];
    for(i=0;i<26;i++)
    {
        if(c[i]>maximum)
        {
            maximum=c[i];
            p=i;
        }
    }
    printf("%c has appeared the most of the time %d time",p+97,maximum);
    return 0;
}

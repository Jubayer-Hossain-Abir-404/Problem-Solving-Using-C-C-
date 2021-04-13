#include<stdio.h>
#include<string.h>
void repeated_character(char a[])
{
    int num[26]={0},i=0,p=0;
    int maximum;
    while(a[i]!='\0')
    {
        num[a[i]-'a']++;
        i++;
    }
    maximum=num[0];
    for(i=0;i<26;i++)
    {
        if(num[i]>maximum)
        {
            maximum=num[i];
            p=i;
        }
    }
    printf("%c has appeared the most of the time like %d time",p+97,maximum);
}
int main()
{
    char x[100];
    printf("Enter a word:");
    gets(x);
    repeated_character(x);
}

#include<stdio.h>
#include<string.h>
int find_anagram(char a1[],char a2[])
{
    int num1[26]= {0},num2[26]= {0},i=0;
    while(a1[i]!='\0')
    {
        num1[a1[i]-'a']++;
        i++;
    }
    i=0;
    while(a2[i]!='\0')
    {
        num2[a2[i]-'a']++;
        i++;
    }
    for(i=0; i<26; i++)
    {
        if(num1[i]!=num2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a1[100],a2[100];
    int flag;
    printf("Enter the string:");
    gets(a1);
    printf("Enter another string:");
    gets(a2);
    flag=find_anagram(a1,a2);
    if(flag==1)
    {
        printf("%s and %s are anagrams",a1,a2);
    }
    else
    {
        printf("%s and %s are not anagram",a1,a2);
    }
    return 0;
}


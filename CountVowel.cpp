#include<stdio.h>
#include<string.h>
int CountVowel(char *p)
{
    int n,i,c=0;
    n=strlen(p);
    for(i=0;i<n;i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='e')
        {
            c++;
        }
    }
    return c;
}
int main()
{
    char x[100];
    int ans;
    printf("The word:");
    gets(x);
    ans=CountVowel(x);
    printf("The counted vowel %d",ans);
    return 0;
}

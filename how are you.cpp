#include<stdio.h>
#include<string.h>
int main()
{
    char x[15];
    int i,p,n;
    char d;
    int c=0;
    printf("The string:\n");
    gets(x);
    p=strlen(x);
    printf("The character I want to search:");
    scanf("%c",&d);
    for(i=0;i<p;i++)
    {
        if(x[i]==d)
        {
            n=i+1;
            printf("The character is founded in %d position\n",n);
            c++;
        }
    }
     printf("The character has reappeared %d time",c);
        return 0;
}

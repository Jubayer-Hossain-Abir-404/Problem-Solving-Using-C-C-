#include<stdio.h>
#include<string.h>
int main()
{
    int i,a,b,c;
    char x[10][10];
    for(i=0;i<5;i++)
    {
        printf("Word no.%d:",i+1);
        gets(x[i]);
    }
    for(a=0;a<5;a++)
    {
        c=0;
        for(b=0;x[a][b]!='\0';b++)
        {
            if(x[a][b]=='a'||x[a][b]=='e'||x[a][b]=='i'||x[a][b]=='o'||x[a][b]=='u')
            {
                c++;
            }
        }
        printf("%s has %d vowel\n",x[a],c);
    }
    return 0;
}

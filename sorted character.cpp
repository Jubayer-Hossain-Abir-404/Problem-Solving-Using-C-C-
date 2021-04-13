#include<stdio.h>
#include<string.h>
void sortedcharacter(char x[100],int p)
    {
        char word;
        int i,j;
        for(i=0;i<p;i++)
        {
            for(j=0;j<p-1;j++)
            {
                if(x[j]>x[j+1])
                {
                    word=x[j];
                    x[j]=x[j+1];
                    x[j+1]=word;
                }
            }
        }
        for(i=0;i<p;i++)
        {
            printf("%c",x[i]);
        }
    }
    int main()
    {
        char s[100];
        int p;
        printf("Enter a string>>");
        gets(s);
        p=strlen(s);
        sortedcharacter(s,p);
    }


#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,a;
    char x[26],ch[10];
    for(i=65; i<=90; i++)
    {
        printf("%c",x[j]=i);
        j++;
    }
    printf("\nThe characters are:\n");
    for(a=0; a<6; a++)
    {
        scanf("\n%c",&ch[a]);
    }
    for(a=0; a<6; a++)
    {
        for(j=0; j<26; j++)
        {
            if(ch[a]==x[j])
            {
                printf("Position of %c is %d\n",ch[a],j);
            }
        }
    }
    for(i=90;i>=65;i--)
    {
        printf("%c",i);
    }
    return 0;

}

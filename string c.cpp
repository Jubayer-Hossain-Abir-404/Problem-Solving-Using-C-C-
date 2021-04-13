#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i,j,p;
    int c=0;
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            c++;
        }
        else if(x[i]>='a'&&x[i]<='z')
        {
            x[i]=x[i]-32;
            printf("The converted letter %c\n",x[i]);
        }
    }
    printf("The number of uppercase letters %d",c);
    return 0;
}


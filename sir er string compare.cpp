#include<stdio.h>
#include<string.h>
int stringcompare(char *s,char *t)
{
    int i;
    while(*s!=NULL&&*t!=NULL)
    {
        if(*s>*t)
        {
            return 1;
        }
        else if(*s<*t)
        {
            return -1;
        }
        s=s+1;
        t=t+1;

    }
    if(*s==NULL&&*t==NULL)
            {
                return 0;
            }
            else if(*s==NULL)
            {
                return -1;
            }
            else
            {
                return 1;
            }
}
int main()
{
    char x[20],y[20];
    int ans;
    printf("The first word:");
    gets(x);
    printf("The second word:");
    gets(y);
    ans=stringcompare(x,y);
    if(ans==1)
    {
        printf("%s is greater than %s but would appear later",x,y);
    }
    else if(ans==-1)
    {
        printf("%s is less than %s but would appear before ",x,y);
    }
    else
    {
        printf("The words are same");
    }
    return 0;
}

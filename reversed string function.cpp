#include<stdio.h>
#include<string.h>
void reversed(char x[],int p)
{
    int i;
    char temp;
    for(i=0;i<p/2;i++)
    {
        temp=x[i];
        x[i]=x[p-i-1];
        x[p-i-1]=temp;
    }
    printf("After reversing the string will be like %s",x);
}
int main()
{
    char x[20];
    int p;
    printf("The string I want to give:");
    gets(x);
    p=strlen(x);
    reversed(x,p);
}

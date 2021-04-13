#include<stdio.h>
#include<string.h>
void stringreverse(char x[100],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        x[i]=x[n-i-1];
    }
    for(i=0;i<n;i++)
    {
        printf("%c",x[i]);
    }
}
int main()
{
    char x[100];
    int n;
    printf("A string>>");
    gets(x);
    n=strlen(x);
    stringreverse(x,n);

}

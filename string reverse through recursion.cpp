#include<stdio.h>
#include<string.h>
void reversed(char str1[],int i,int n)
{
    char temp;
    temp=str1[i];
    str1[i]=str1[n-i];
    str1[n-i]=temp;
    if(i==n/2)
    {
        return;
    }
    reversed(str1,i+1,n);

}
int main()
{
    char str1[20];
    int n;
    printf("Enter a string to reverse:");
    gets(str1);
    n=strlen(str1);
    reversed(str1,0,n-1);
    printf("The string after reversing is:%s",str1);
    return 0;
}

#include<stdio.h>
int main()
{
    char str1[20];
    int *p1;
    p1=str1;
    int c=0;
    printf("Enter the string:");
    scanf("%s",&str1);
    p1=str1;
    while(*p1!='\0')
    {
        p1++;
        c++;
    }
    printf("Length of sting:%d",c);
    return 0;
}

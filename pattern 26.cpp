#include<stdio.h>
#include<math.h>
int main()
{
    char ch='A'-1;
    int i,j,k,c;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    for(c=65;c<=122;c++)
    {
        printf("%c",c);
        printf(" ");
    }
    return 0;
}

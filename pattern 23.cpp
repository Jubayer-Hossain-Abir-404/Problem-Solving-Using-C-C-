#include<stdio.h>
#include<math.h>
int main()
{
    char ch='a'-1;
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<=5;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}


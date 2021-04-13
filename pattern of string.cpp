#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,k;
    char x[12];
    printf("How many times:");
    scanf("%d",&p);
    scanf("%c",&x[0]);
    printf("The string:\n");
    for(k=0;k<p;k++)
    {
        scanf("%c",&x[k]);
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",x[j]);
        }
        printf("\n");
    }
    return 0;
}

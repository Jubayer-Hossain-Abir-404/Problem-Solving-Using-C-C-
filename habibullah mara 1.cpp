#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,swaped;
    char x[10];

    printf("How many times:");
    scanf("%d",&n);
    printf("String of character:\n");
    scanf("%c",&x[0]);
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);
    }
    for(j=0;j<n/2;j++)
    {
        swaped=x[j];
        x[j]=x[n-j-1];
        x[n-j-1]=swaped;
    }
    printf("After reverse:\n");
    for(k=0;k<n;k++)
    {
        printf("%c",x[k]);
    }
    return 0;

}

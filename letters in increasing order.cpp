#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i,j,n;
    int c=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The word is:\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        if(x[j]<x[j+1])
        {
            c++;
        }
    }
    printf("The number of letters are in increasing order is %d",c);
    return 0;
}

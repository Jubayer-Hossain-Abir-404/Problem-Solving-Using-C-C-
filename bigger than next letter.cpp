#include<stdio.h>
int main()
{
    char x[100];
    int i,j,n;
    int c=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The characters are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);
    }
    for(j=0;j<n-1;j++)
    {
        if(x[j]>x[j+1])
        {
            c++;
        }
    }
    printf("The number of times %d",c);
    return 0;
}

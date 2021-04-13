#include<stdio.h>
#include<string.h>
int main()
{
    char x[20][40],swaped[20][40],y[20][40];
    int i,j,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("Enter name of %d items:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",x[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;x[i][j]!='\0';j++)
        {
            if(x[i][j]>x[i+1][j])
            {
                while(x[i][j]!=NULL)
                {
                    swaped=x[i][j];
                    y[i][j]=swaped;
                }
            }
            else if(x[i][j]<x[i+1][j])
            {
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",x[i]);
    }
    return 0;
}

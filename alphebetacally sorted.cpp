#include<stdio.h>
#include<string.h>
int main()
{
    char x[20][20],y[20][20],t[20],g[20];
    int i,j,k,n;
    scanf("%d",&n);
    printf("Enter names of %d items:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",x[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;x[j][k]!='\0';k++)
            {
                if(x[i][k]>x[j][k])
                {
                    t[i]=x[i];
                    g[i]=x[j];
                    x[j]=t[i];
                }
                else if(x[i][k]<x[j][k])
                {
                    break;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",g[i]);
    }
    return 0;
}

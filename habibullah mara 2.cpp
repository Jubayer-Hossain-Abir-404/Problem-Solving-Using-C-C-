#include<stdio.h>
#include<string.h>
int main()
{
    char x[20];
    int i,j,k,n;
    int c=0;
    printf("How many time:");
    scanf("%d",&n);
    printf("The elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(x[j]==x[k])
            {
                c++;
            }
        }
        if(c==0||c==1)
        {
            printf("No repeated character.");
        }
        else if(c!=0)
        {
            printf("\nRepeated characters:\n");
            printf("%c:%d times",x[i],c);
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    char x[100];
    int y[100];
    int i,j,k,l,n,p;
    int maximum=0;
    int c=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The characters are:\n");
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
        y[j]=c;
        c=0;
    }
    maximum=y[0];
    p=0;
    for(l=1;l<n;l++)
    {
        if(y[l]>maximum)
        {
            maximum=y[l];
        }

    }
    printf(" has appeared the most of time like %d times",maximum);
    return 0;

}

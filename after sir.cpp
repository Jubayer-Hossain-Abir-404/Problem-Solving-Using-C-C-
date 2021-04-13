#include<stdio.h>
int main()
{
    char x[100];
    int c[27];
    int i,a,j,n,b,maximum;
    int p=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The characters are:\n");
    for(b=0;b<26;b++)
    {
        c[b]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);
        for(a=0;a<26;a++)
        {
            if(x[i]-97==a)
            {
                c[a]=c[a]+1;
            }
        }
    }
    maximum=c[0];
    for(j=0;j<26;j++)
    {
        if(c[j]>maximum)
        {
            maximum=c[j];
            p=j;
        }
    }
    p=p+97;
    printf("%c has appeared the most of the time like %d time",p,maximum);
    return 0;
}

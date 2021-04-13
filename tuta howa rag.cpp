#include<stdio.h>
int main()
{
    char a[10];
    char swaped;
    int y[10];
    int i,j,k,l,m,b,n,p,maximum;
    int c=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The characters are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
        y[j]=c;
        c=0;
    }
    maximum=y[0];
    for(l=0;l<n-1;l++)
    {
        if(y[l]>maximum)
        {
            maximum=y[l];
        }
    }
    for(m=0;m<n;m++)
    {
        if(maximum==y[m])
        {
            swaped=a[m];
        }
    }
    printf("This %c character appeared the most of time like %d times",swaped,maximum);
    return 0;



}

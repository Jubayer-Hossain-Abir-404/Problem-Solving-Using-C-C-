#include<stdio.h>
#include<math.h>
int main()
{
    int x[10000],y[10000],i,j,k=1,a=1,n,c;
    printf("Find out the nth prime:");
    scanf("%d",&n);
    for(i=2;i<10000;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            x[a]=k;
            y[a]=i;
            a++;
            k++;
        }
    }
    printf("The %dth prime is:%d",x[n],y[n]);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int x=0;
    int c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            x=x+i;
            c++;
        }
        printf("%d\n",x);

    }
    printf("%d",c);
    return 0;
}

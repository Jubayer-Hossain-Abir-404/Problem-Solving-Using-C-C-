#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    int count=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }

        }
        if(count==2)
    {
        printf("%d",i);
        count=0;
    }
    return 0;
}

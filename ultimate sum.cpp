#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,q,w,y,z;
    float sum=0;
    float x,p;
    printf("The value of n:");
    scanf("%d",&n);
    printf("The value of x:");
    scanf("%f",&x);
    p=x;
    q=1;
    printf("The permutation series:%d\n",q);
    sum=0;
    z=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-(float)p/q;
        }
        else
        {
            sum=sum+(float)p/q;
        }
        p=p*(x*x);
        printf("The value of x:%.2f\n",p);
        z=z+1;
        y=z+1;
        w=z*y;
        q=q*w;
        printf("The permutation series:%d\n",q);
        z=z+1;
    }
    printf("Sum:%.2f",sum);
    return 0;
}

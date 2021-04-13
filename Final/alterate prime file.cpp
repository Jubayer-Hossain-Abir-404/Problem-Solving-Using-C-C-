#include<stdio.h>
#include<math.h>
int isprime(int p)
{
    int i;
    for(i=2;i<p;i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    FILE *g,*h;
    g=fopen("input.txt","r");
    h=fopen("prime.txt","w");
    int i,x[100],ans;
    printf("The values:\n");
    for(i=0;i<10;i++)
    {
        fscanf(g,"%d",&x[i]);
        printf("%d\n",x[i]);
    }
    for(i=0;i<10;i++)
    {
        ans=isprime(x[i]);
        if(ans==1)
        {
            fprintf(h,"%d is prime\n",x[i]);
            printf("%d is prime\n",x[i]);
        }
        else
        {
            fprintf(h,"%d is not prime\n",x[i]);
            printf("%d is not prime\n",x[i]);
        }
    }
    return 0;
}

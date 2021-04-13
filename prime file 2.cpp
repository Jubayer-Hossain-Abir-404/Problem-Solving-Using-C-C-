#include<stdio.h>
#include<math.h>
void primecheck(int *x,int n,FILE *h);
int main()
{
    int i,x[10],n;
    FILE *g,*h;
    g=fopen("input.txt","r");
    h=fopen("prime.txt","w");
    printf("How many times:");
    fscanf(g,"%d",&n);
    printf("%d\n",n);
    printf("The values are:\n");
    for(i=0; i<n; i++)
    {
        fscanf(g,"%d",&x[i]);
        printf("%d\n",x[i]);
    }
    primecheck(x,n,h);
}
void primecheck(int *x,int n,FILE *h)
{
    int i,j,c;
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=2; j<*x; j++)
        {
            if(*x%j==0)
            {
                c++;
            }

        }
        if(c==0)
        {
            fprintf(h,"%d is  a prime number\n",*x);
            printf("%d is a prime number\n",*x);
        }
        else
        {
            fprintf(h,"%d is not a prime number\n",*x);
            printf("%d is not a prime number\n",*x);
        }
        x=x+1;
    }
    return;
}



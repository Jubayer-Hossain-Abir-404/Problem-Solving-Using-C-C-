#include<stdio.h>
#include<math.h>

void newton(float *x,float *y,float x1)
{
    float f,n,i,j=1,f1=1,f2=0,p;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);
    f=y[0];
    while(n!=1)
    {
        for (i=0; i<n-1; i++)
        {
            p= ((*(y+1)-*y)/(*x(i+j)-*x));
            *y=p;
            x++;
            y++;
        }
        f1=1;
        for(i=0; i<j; i++)
        {
            f1=f1*(x1-*x);
            x++;
        }
        f2+=(y[0]*f1);
        n--;
        j++;
    }
    f+=f2;
}

int main()
{
    float x[6],y[6];
    int n;
    scanf("%d",&n);
     printf("\nEnter the different values of x:\n");
    for (int i=1; i<=n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("\nThe corresponding values of y are:\n");
    for (int i=1; i<=n; i++)
    {
        scanf("%f", &y[i]);
    }
    float x1;
    printf("Determine the value:");
    scanf("%f",&x1);
    newton(x,y,x1);
}

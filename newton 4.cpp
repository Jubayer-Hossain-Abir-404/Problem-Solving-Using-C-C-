#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    float x[10],y[10],a,sum=0,mult;
    printf("No of sample points:");
    scanf("%d",&n);
    printf("\nAll x with corresponding y:\n");
    for(i=0; i<n; i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }
    printf("\nEnter x1 for calculation:");
    scanf("%f",&a);

    for(j=0; j<n-1; j++)
    {
        for(i=n-1; i>j; i--)
        {
            y[i]=(y[i]-y[i-1])/(x[i]-x[i-j-1]);
        }
    }
    for(i=n-1; i>=0; i--)
    {
        mult=1;
        for(j=0; j<i; j++)
        {
            mult*=(a-x[j]);
        }

        mult*=y[j];
        sum+=mult;
    }
    printf("The result is: %f",sum);
    return 0;
}


#include<stdio.h>
#include<math.h>

float f(int x)
{
    double a=140000/float(140000-(2100*x));
    return 2000*(log(a))-(9.8*x);
}

void trapezoid(int a,int b,int n)
{
    float tramp=0.0;
    int  h=(b-a)/float(n);
    if(n==1)
    {
        tramp=tramp+((b-a)/2*n)*(f(a)+f(b));
    }
    else if(n>1)
    {
        tramp=f(a);
        //printf("\nT:%f\n",tramp);
        for(int i=1; i<n; i++)
        {
            tramp=tramp+2*f(a+i*h);
            //printf("\nT:%f\n",tramp);
            tramp=tramp+f(b);
            //printf("\nT:%f\n",tramp);
            tramp=((b-a)/float(2*n))*tramp;
            //printf("\nT:%f\n",tramp);
        }
    }
    float Et=11061.34-tramp;
    float Etabs=fabs(((11061.34-tramp)/11061.34)*100);
    printf("\nx : 11061.34\n");
    printf("\nI : %f\n",tramp);
    printf("\nn : %d I : %f Et : %f Et(%) : %f",n,tramp,Et,Etabs);
}

int main()
{
    int n;
    printf("Ïnput the number of segment:");
    scanf("%d",&n);
    trapezoid(8,30,n);
}

#include<stdio.h>
#include<math.h>

float f(float x)
{
    double a=140000/float(140000-(2100*x));
    return 2000*(log(a))-(9.8*x);
}

void simpson(float a,float b,int n)
{
    float tramp;
    if(n==1)
    {
        float g=(a+b)/float(2);
        tramp=f(a)+4*f(g)+f(b);
        //printf("\nT:%f\n",tramp);
        tramp=(b-a)/float(6)*tramp;
       // printf("\nT:%f\n",tramp);
    }
    else if(n>1)
    {
        float h=(b-a)/float(n);
        tramp=f(a)+f(b);
        //printf("\nT:%f\n",tramp);
        for(int i=1; i<n; i++)
        {
            if(i%2!=0)
            {
                tramp=tramp+4*f(a+i*h);
                //printf("\nT:%f\n",tramp);
            }
        }
        for(int i=2; i<n-1; i++)
        {
            if(i%2==0)
            {
                tramp=tramp+2*f(a+i*h);
                // printf("\nT:%f\n",tramp);
            }
        }
        //printf("\nT:%f\n",tramp);
        //printf("\nT:%f\n",tramp);
        tramp=((b-a)/float(3*n))*tramp;
    }
    // printf("\nT:%f\n",tramp);
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
    simpson(8.0,30.0,n);
}


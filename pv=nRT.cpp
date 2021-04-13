#include<stdio.h>
#include<math.h>
int main()
{
    float p,v,T,m;
    printf("What is the value of P,v,T:");
    scanf("%f%f%f",&p,&v,&T);
    m=(p*v)/(0.37*T+170.2);
    printf("The mass flow is:%.2f",m);
    return 0;
}

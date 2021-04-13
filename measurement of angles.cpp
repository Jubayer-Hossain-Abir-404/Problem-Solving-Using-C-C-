#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,A,B,C;
    float pi=acos(-1); //For value of pi we use acos(-1).
    scanf("%f%f%f",&a,&b,&c);
    A=((b*b+c*c)-(a*a))/(2*b*c);
    A=acos(A)*(180/pi);
    B=((c*c+a*a)-(b*b))/(2*c*a);
    C=180-(A+B);
    printf("A=%f \nB=%f \nC=%f",A,B,C);
    return 0;
}

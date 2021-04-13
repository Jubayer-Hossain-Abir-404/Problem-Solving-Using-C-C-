#include<stdio.h>
#include<math.h>
int main()
{
    float x,salary;
    scanf("%f",&x);
    salary=(x!=40)?((x<40)?(4*x+100):(4.5*x+150)):300;
    printf("%.2f",salary);
    return 0;
}

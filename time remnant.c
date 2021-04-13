#include<stdio.h>
int main()
{
    int hour,minute;
    float required_time;
    scanf("%d",&hour);
    scanf("%d",&minute);
    required_time=hour+minute/60.0;
    printf("%f",required_time);
    return 0;
}

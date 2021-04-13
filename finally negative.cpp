#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float sum,average,value;
    sum=0;
    for(x=1;x<=1000;x++)
    {
        printf("The value is:");
        scanf("%f",&value);
        if(value<0)
            break;
        sum=sum+value;
    }
    average=sum/(float)(x-1);
    printf("Number of values:%d\n",x-1);
    printf("The sum is:%.2f\n",sum);
    printf("The average is:%.2f",average);
    return 0;
}

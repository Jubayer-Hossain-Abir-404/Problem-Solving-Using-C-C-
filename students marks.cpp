#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int count=0;
    float s=0;
    float x,avg;
    printf("The number of students are:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x);
        if(x>=60)
        {
            s=s+x;
            count++;
        }
    }
    avg=(float)s/count;
    printf("The average is:%f\n",avg);
    printf("The number of passing subjects:%d",count);
    return 0;
}

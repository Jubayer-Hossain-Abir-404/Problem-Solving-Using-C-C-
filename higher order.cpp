#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,n;
    int c=0;
    int s=0;
    float avg;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The value of x:");
        scanf("%d",&x[i]);
        if(x[i+1]>x[i])
        {
            c++;
            s=s+x[i];
        }
    }
    avg=(float)s/n;
    printf("The c is:%d\n",c);
    printf("The sum is:%d\n",s);
    printf("Average:%.2f",avg);
    return 0;
}

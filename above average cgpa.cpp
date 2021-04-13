#include<stdio.h>
#include<math.h>
int main()
{
    float cgpa[100],s=0,avg;
    int i,j,n;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("cgpa:");
        scanf("%f",&cgpa[i]);
        s=s+cgpa[i];
    }
    avg=(float)s/n;
    printf("The average is:%.2f\n",avg);
    for(j=0;j<n;j++)
    {
        if(cgpa[j]>avg)
        {
            c++;
        }
    }
    printf("The c is:%d",c);
    return 0;
}

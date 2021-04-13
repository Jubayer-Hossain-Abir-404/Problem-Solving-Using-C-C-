#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,n;
    float sum=0;
    int c=0;
    float cgpa[100];
    float avg,l,k,one;
    printf("How many times:");
    scanf("%d",&n);
    printf("The cgpa's are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&cgpa[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+cgpa[j];
    }
    printf("Sum:%.2f\n",sum);
    avg=sum/n;
    printf("Average:%.2f\n",avg);
    l=avg-0.1;
    k=avg+0.1;
    for(a=0;a<n;a++)
    {
        if(cgpa[a]>l&&cgpa[a]<k)
        {
            c++;
            one=cgpa[a];
        }
    }
    printf("The cgpa which appears to be near average is %.2f and appeared %d time",one,c);
    return 0;

}

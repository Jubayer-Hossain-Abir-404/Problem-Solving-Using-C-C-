#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k,n;
    int sum=0;
    int c=0;
    float avg;
    printf("How many times:");
    scanf("%d",&n);
    printf("The elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+x[j];
    }
    printf("The sum:%d\n",sum);
    avg=sum/n;
    printf("Average:%.2f\n",avg);
    for(k=0;k<n;k++)
    {
        if(x[k]>avg)
        {
            c++;
        }
    }
    printf("The elements which are above average is %d",c);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int sum=1;
    int final_sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       sum=sum+i;
       final_sum=final_sum+sum;
    }
    printf("%d",final_sum);
    return 0;
}

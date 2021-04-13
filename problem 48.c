#include<stdio.h>
int main()
{
    int i;
    int array[5];
    int sum1=0;
    int sum2=0;
    printf("Values in array:");
    for(i=0;i<5;i++)

    {

        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
          sum1=sum1+array[i];
        }
        else
        {
            sum2=sum2+array[i];
        }
    }
    printf("Some of odd values:%d\n",sum1);
    printf("Some of even values:%d",sum2);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,day;
    int count=0;
    int counter=0;
    float temp,x;
    printf("The days are:");
    scanf("%d",&day);
    for(i=1;i<=day;i++)
    {
        printf("The temperature is:");
        scanf("%f",&temp);
        if(i==1)
        {
            x=temp;
        }
        else if(temp>=x+5)
        {
            count++;
        }
        else if(temp<=x-5)
        {
            counter++;
        }
        x=temp;
    }
    printf("The temperature has abruptly increased  for %d days\n",count);
    printf("The temperature has abruptly decreased for %d days",counter);
    return 0;
}

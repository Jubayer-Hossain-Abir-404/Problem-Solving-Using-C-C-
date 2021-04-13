#include<stdio.h>
#include<math.h>
int main()
{
    int i,day;
    int count=0;
    int counter=0;
    int x,temp;
    printf("The days are:");
    scanf("%d",&day);
    for(i=1;i<=day;i++)
    {
        printf("The temperature is:");
        scanf("%d",&temp);
        if(i==1)
        {
            x=temp;
        }
        else if(temp>x)
        {
            count++;
        }
        else if(temp<x)
        {
            counter++;
        }
        x=temp;

    }
    printf("The temperature has increased for %d days\n",count);
    printf("The temperature has decreased for %d days",counter);
    return 0;
}

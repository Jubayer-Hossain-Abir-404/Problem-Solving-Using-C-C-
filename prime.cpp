#include<stdio.h>
#include<math.h>
int main()
{
    int number,i;
    int counter=0;
    printf("Enter any number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            counter=counter+1;
            printf("Divided  by:%d\n",i);
        }
    }
    if(counter==2)
    {
        printf("Prime:%d",counter);
        counter=0;
    }
    else
    {
        printf("Composit:%d",counter);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int i,number;
    int counter=0;
    printf("Enter any number:");
    scanf("%d",&number);
    for(i=10;i<=99;i++)
    {
        if(number%i==0)
        {
            counter=counter+1;
            printf("number divided by:%d\n",i);

        }
    }
    printf("number divided by a within the given limit of number:%d",counter);
    return 0;
}


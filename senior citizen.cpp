#include<stdio.h>
#include<math.h>
int main()
{
    int age,i;
    printf("I need to know the age of 10 peoples:");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&age);
    }
    if(age>=18&&age<65)
    {
        printf("Voers are:%d",i-1);
    }
    else if(age>=65)
    {
        printf("Senior Citizens are:%d",i-1);
    }
    return 0;
}

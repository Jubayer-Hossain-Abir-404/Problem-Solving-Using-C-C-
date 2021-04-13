#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,n,back_age,required_age;
    int count=0;
    int counter=0;
    int s=0;
    int t=0;
    printf("The number of people's age I want to know:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The age's are:");
        scanf("%d",&x);
        if(x>=13&&x<=19)
        {
            s=s+x;
            count++;
        }
             if(x<13)
            {
                required_age=13-x;
                printf("The required age :%d\n",required_age);
            }
            if(x>19)
            {
                back_age=x-19;
                printf("I was teenage back %d years ago\n ",back_age);
            }
            if(x<13||x>19)
            {
                counter++;
                t=t+x;
            }

    }
    printf("The number of  teenagers are:%d\n",count);
    printf("The summation of teenage people are :%d\n",s);
    printf("The number of other aged people are:%d",counter);
    printf("The total of other aged people are:%d",t);
    return 0;
}

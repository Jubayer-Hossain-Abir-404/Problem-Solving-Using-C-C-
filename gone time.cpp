#include<stdio.h>
#include<math.h>
int main()
{
    int second,hour,minute,required,remaining_second;
    printf("What time is it:");
    scanf("%d",&second);
    hour=second/3600;
    required=second-hour*3600;
    if(required>=60)
    {
        minute=second/60;
        printf("There is some minute\n");
        remaining_second=second%60;
        printf("There is some seconds too\n");

    }
    else
    {
        minute=0;
        printf("There is no minute left\n");
        remaining_second=second%60;
        printf("But there is some second\n");
    }
    printf("The corresponding hour,minute and second are:%d Hour,%d Minute,%d Second",hour,minute,remaining_second);
    return 0;
}

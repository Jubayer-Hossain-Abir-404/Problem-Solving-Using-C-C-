#include<stdio.h>
int main()
{
    char day;
    printf("Enter any day:");
    scanf("%c",&day);
    if(day=='f'||day=='F')
    {
        printf("You can sleep today");
    }
    else
    {
        printf("You have to go to class");
    }
    return 0;
}

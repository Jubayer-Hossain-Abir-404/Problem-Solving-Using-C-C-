#include<stdio.h>
int main()
{
    char day[50];
    printf("Enter first letter of day:");
    scanf("%s",&day);
    if(day=="Friday")
    {
        printf("You can sleep today!");
    }
    else
    {
        printf("You have to go to class");
    }
    return 0;
}

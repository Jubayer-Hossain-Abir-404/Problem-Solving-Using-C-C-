#include<stdio.h>
int main()
{
    int age;
    printf("What is your age my boy?:");
    scanf("%d",&age);
    if(age>=18)
        printf("Yes!!!! You can open an open an account in our bank");
    else
        printf("Sorry,Sir you can not open an account.\nHave a nice day.");
    return 0;
}

#include<stdio.h>
int main()
{
    int age;
    printf("Son,what is your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Voter");
    }
    else
    {
        printf("Not Voter");
    }
    return 0;
}

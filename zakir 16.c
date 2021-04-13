#include<stdio.h>
int main()
{
    int result;
    printf("Enter your result:");
    scanf("%d",&result);
    if(result<10)
    {
        printf("Study hard!");
    }
    else if(result<40)
    {
        printf("You have failed");
    }
    else if(result>=40&&result<90)
    {






        printf("You have passed");
    }
    else if(result>=90&&result<=100)
    {
        printf("You have passed.\nYou have got an A+!!!");

    }
    else
    {
        printf("Error value");
    }


    return 0;
}

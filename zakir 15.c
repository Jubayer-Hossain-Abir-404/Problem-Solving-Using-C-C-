#include<stdio.h>
int main()
{
    int result;
    printf("Type your result:");
    scanf("%d",&result);
    if(result<10)
    {
        printf("Study hard!");
    }
    else
    {
        if(result<40)
        {
            printf("You failed\n");
        }
        else
        {
            printf("You passed!\n");
            if(result>=90)
            {
                printf("And you got an A!\n");
            }
        }
    }
    return 0;
}

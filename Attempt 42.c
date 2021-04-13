#include<stdio.h>
main()
{
    char ch;
    printf("Enter alphabet 'a':");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='A'))
    {
        printf("Good Job!");

    }
    else
    {
        printf("Incorrect input.");
    }
}

#include<stdio.h>
int main()
{
    int x,y,quotient,reminder;
    printf("What are the values:");
    scanf("%d%d",&x,&y);
    quotient=x/y;
    reminder=x%y;
    printf("The quotient is :%d\n",quotient);
    printf("The reminder is :%d",reminder);
    return 0;
}

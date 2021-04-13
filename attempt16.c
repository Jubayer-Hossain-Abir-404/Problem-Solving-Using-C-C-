#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("The number %d is  EVEN\n ",i);
        }
        else
        {
            printf("The number %d is not EVEN\n ",i);
        }
    }
    return 0;
}

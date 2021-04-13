#include<stdio.h>
int main()
{
    int i;
    int a[10];
    int *ptr;
    ptr=a;
    printf("Enter 5 elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=a;
    printf("Entered Number:");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}

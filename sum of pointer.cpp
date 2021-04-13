#include<stdio.h>
int main()
{
    int p;
    int *ptr;
    ptr=&p;
    printf("Enter value:");
    scanf("%d",ptr);
    p=p+5;
    printf("Value of P is :%d\n",p);
    printf("Value of *ptr:%d",*ptr);
    return 0;
}

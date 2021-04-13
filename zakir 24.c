#include<stdio.h>
int square(int num);
int main(void)
{
    printf("Square is :%d",square(5));
    return 0;
}
int square(int num)
{
    return num*num;
}


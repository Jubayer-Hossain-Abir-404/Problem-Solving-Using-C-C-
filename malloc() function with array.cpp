#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i;
    p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("Enter value:");
        scanf("%d",(p+i));
    }
    printf("Values are:");
    for(i=0;i<5;i++)
    {
        printf("%d   ",*(p+i));
    }
    return 0;
}

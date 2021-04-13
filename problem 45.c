#include<stdio.h>
int main()
{
    int myarray[10];
    int i;
    int sum=0;
    printf("Enter the value simultaniously:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&myarray[i]);
        sum=sum+myarray[i];
    }
    printf("%d",sum);
    return 0;
}

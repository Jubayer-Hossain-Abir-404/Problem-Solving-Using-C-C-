#include<stdio.h>
#include<math.h>
int main()
{
    int minute,second;
    float Bill;
    printf("What is the duration of the call:");
    scanf("%d %d",&minute,&second);
    Bill=(minute*60)*0.8+(second*0.8);
    printf("Why do I talk that much and because of that I have to pay this much bill:%.2f",Bill);
    return 0;

}


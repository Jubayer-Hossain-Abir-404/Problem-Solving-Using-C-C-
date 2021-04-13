#include<stdio.h>
#include<math.h>
int main()
{
    int sell,price;
    float total;
    printf("What is the sell of this month:");
    scanf("%d",&sell);
    printf("What is the price of the product:");
    scanf("%d",&price);

    if(sell>=100000)
    {
        total=price+(price*0.1);
    }
    else if(sell<100000&&sell>=50000)
    {
        total=price-(price*0.05);
    }
    printf("After all this the price is:%.2f",total);
    return 0;
}

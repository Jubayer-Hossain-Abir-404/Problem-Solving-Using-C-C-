#include<stdio.h>
#include<string.h>
#include<math.h>
struct item
{
    int code;
    char definition[20];
    int quantity;
};
int main()
{
    struct item store[10];
    int n,i,icode,flag=0;
    printf("How many time:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Item#%d\n",i+1);
        printf("Code,Name,Quantity:");
        scanf("%d%s%d",&store[i].code,store[i].definition,&store[i].quantity);
    }
    printf("Enter item code for the item you want to view:");
    scanf("%d",&icode);
    for(i=0;i<n;i++)
    {
        if(store[i].code==icode)
        {
            flag=1;
            printf("Definition:%s   Quantity:%d",store[i].definition,store[i].quantity);
            break;
        }
    }
    if(flag==0)
    {
        printf("Item not found");
    }
    return 0;
}

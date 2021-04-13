#include<stdio.h>
#include<math.h>
#include<string.h>
struct item
{
    int code;
    char definition[20];
    int quantity;
};
int main()
{
    struct item store[10],swaped;
    int n,i,j;
    printf("How many items:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Item#%d\n",i+1);
        printf("Code,Name,Quantity:");
        scanf("%d%s%d",&store[i].code,store[i].definition,&store[i].quantity);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(store[j].code>store[j+1].code)
            {
                swaped=store[j];
                store[j]=store[j+1];
                store[j+1]=swaped;
            }
        }
    }
    printf("After sorting on code:\n");
    for(i=0;i<n;i++)
    {
        printf("%d %s %d\n",store[i].code,store[i].definition,store[i].quantity);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int x,a;
    int c=0;
    printf("x&a:");
    scanf("%d\n%d",&x,&a);
    while(x!=1)
    {
        x=x/a;
        c++;
    }
    printf("Ans:%d",c);
    return 0;
}

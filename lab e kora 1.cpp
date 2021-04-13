#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int s=0;
    int i=0;
    do
    {
        printf("The values:");
        scanf("%d",&x[i]);
        if(x[i]==1000)
        {
            break;
        }
        s=s+x[i];
        i++;

    }while(x[i]!=1000);
    printf("Sum:%d",s);
    return 0;
}

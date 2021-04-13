#include<stdio.h>
#include<math.h>
int main()
{
    int *p,sum=0,i;
    int x[5];
    printf("The values are:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    p=x;
    i=0;
    printf("Element Value Address\n\n");
    while(p<&x[5])
    {
        printf("x[%d]    %d    %d\n",i,*p,p);
        sum=sum+*p;
        p++;
        i++;
    }
    printf("\nSum=%d\n",sum);
    printf("&x[0]=%d\n",&x[0]);
    printf("p=%d",p);
    return 0;
}

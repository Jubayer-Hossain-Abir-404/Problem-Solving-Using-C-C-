#include<stdio.h>
#include<math.h>
int main()
{
    FILE *f1,*f2,*f3;
    f1=fopen("value.txt","r");
    f2=fopen("even.txt","a");
    f3=fopen("odd.txt","a");
    int i,x[100];
    printf("The values:\n");
    for(i=0;i<10;i++)
    {
        fscanf(f1,"%d",&x[i]);
        printf("%d\n",x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            fprintf(f2,"%d is even\n",x[i]);
            printf("%d is even\n",x[i]);
        }
        else
        {
            fprintf(f3,"%d is odd\n",x[i]);
            printf("%d is odd\n",x[i]);
        }
    }
    return 0;
}

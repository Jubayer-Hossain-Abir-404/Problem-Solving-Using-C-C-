#include<stdio.h>
#include<math.h>
int main()
{
    int p,n;
    float q;
    printf("------------------------------------------------------\n");
    printf("2 to power n             n               2 to power -n\n");
    printf("------------------------------------------------------\n");
    p=1;
    for(n=0;n<=20;n++)
    {
        if(n==0)
        {
            p=1;
            q=1;
            printf("%d                        %d                       %f\n",p,n,q);
        }
        else
        {
            p=p*2;
            q=1.0/(float)p;
            printf("%d                         %d                       %f\n",p,n,q);
        }
    }
    return 0;
}

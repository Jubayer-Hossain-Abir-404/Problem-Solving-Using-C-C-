#include<stdio.h>
#include<math.h>
int main()
{
    int x[100];
    int i,j,k;
    int n;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("The numbers are:");
        scanf("%d",&x[i]);
    }
    for(j=0; j<n; j++)
    {
        for(k=0; k<n; k++)
        {
            if(x[j]>x[k])
            {
                c++;
            }
        }
        printf("The %d is larger than this numbers:%d\n",x[j],c);
        c=0;
    }

    return 0;
}

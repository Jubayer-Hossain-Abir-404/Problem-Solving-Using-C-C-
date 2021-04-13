#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    int counter=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        }
        if(counter==2)
        {
            printf("%d    ",i);
        }
        counter=0;
    }
    return 0;
}

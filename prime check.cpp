#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0;
    int x=1;
    printf("The number I have to check:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            x=2;
            break;

        }

    }
    if(x==1)
    {
        printf(" %d is a prime number",n);
    }
    else if(x==2)
    {
        printf(" %d is not a prime number",n);
    }
    return 0;
}

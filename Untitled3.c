#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a[10], i;
    for(i=0; i<10; i++)
    {
        a[i]=i;
    }
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {a[i]=a[i]*3;}
    }
    for(i=0; i<10; i++)
    {printf(" %d ", a[i]);}
    return 0;

}

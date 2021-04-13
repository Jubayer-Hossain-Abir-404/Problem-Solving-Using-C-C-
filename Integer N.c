#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",N);
    for(i=N;i>=-32;i--)
    {
        printf("%d\n",i);

    }
    if(N==-1)
    {
        printf("STOP");
    }
    return 0;
}

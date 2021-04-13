#include<stdio.h>
int main()
{
    char x[100];
    int e=0;
    int i,j,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("The alphabets:\n");
    for(i=0; i<n; i++)
    {
        scanf("%c",&x[i]);
    }
    for(j=0; j<n; j++)
    {
        if((x[j]>='A'&&x[j]<='M')||(x[j]>='a'&&x[j]<='m'))
        {
            e++;
        }
    }
    printf("The counted number which are between those alphabets is %d",e);
}

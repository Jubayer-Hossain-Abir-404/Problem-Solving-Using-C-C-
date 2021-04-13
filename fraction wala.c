#include<stdio.h>
int main()
{
    int length,width,nt;
    scanf("%d",&length);
    scanf("%d",&width);
    nt=ceil((length*width)/4.0);
    printf("%d",nt);
    return 0;
}

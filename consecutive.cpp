#include<stdio.h>
#include<math.h>
int main()
{
    char ch,bh;
    printf("The characters are:");
    scanf("%c%c",&ch,&bh);
    if(ch>bh&&ch<bh)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

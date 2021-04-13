#include<stdio.h>
int main()
{
    char x,z;
    printf("The alphabet:");
    scanf("%c",&x);
    if(x>='A'&&x<='Z')
    {
        z=x+32;
        printf("The %c character has converted into %c ",x,z);
    }
    else if(x>='a'&&x<='z')
    {
        z=x-32;
        printf("The %c character has converted into %c",x,z);

    }
    return 0;
}

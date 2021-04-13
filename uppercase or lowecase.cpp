#include<stdio.h>
#include<math.h>
int main()
{
    char x;
    printf("The alphabet:");
    scanf("%c",&x);
    if(x>='A'&&x<='Z')
    {
        printf("Uppercase");
    }
    else if(x>='a'&&x<='z')
    {
        printf("Lowercase");
    }
    return 0;
}
